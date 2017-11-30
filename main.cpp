/*  Least Squares of Linear Regression Calculator
    Author - John Lucey
    Created on 2/10/17
    Last Edited 2/9/17
*/


//Pre-Processor Directives
#include <iostream>
#include <math.h>

using namespace std;

//Main Function
int main()
{
    //Purpose of Program Displayed to user
    cout << "Least Squares of Linear Regression Calculator!" << endl;

    //variables declared
    double avX, avY, slope, intercept, sumX = 0, sumY = 0, x2 = 0, xy = 0, arrayX[100] = {0}, arrayY[100] = {0};
    int i, n = 101;

    //loop while entered value is greater than 100 or less than 0
    do
    {
        //User prompted to enter integer value
        cout << "\nEnter a Data Point Integer Value (not greater than 100) = ";
        //user enter value stored
        cin >> n;
    }

    while ((n<0)|(n>100));

    //Promts User to Enter required values
    cout<<"Enter Corordinates for x , y : \n";

    //For loop to store x & y values in an array
    for (i=0;i<n;i++)
    {
        cin >> arrayX[i] >> arrayY[i];
    }

    //For loop to calulate sums of values,products
    for (i=0;i<n;i++)
    {
        sumX = sumX + arrayX[i];
        sumY = sumY + arrayY[i];
        x2 = x2 + pow(arrayX[i],2);
        xy = xy + (arrayX[i] * arrayY[i]);
    }

        //Equations to ascertain average x,y, slope and intercept;
        avX = sumX/n;
        avY = sumY/n;
        slope = (n * xy - sumX * sumY)/(n * x2-(pow(sumX,2)));
        intercept = avY - (slope * avX);

        //DIisplays returned values to user
        cout<<"Value of the Slope = " << slope <<endl;
        cout<<"Value of the Intercept = "<< intercept <<endl;



    return 0;

}
