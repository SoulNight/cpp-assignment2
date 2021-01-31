/***********************************************************
 * AUTHOR     : TONY BAUTISTA
 * STUDENT ID : 2371710
 * CLASS      : CPSC 298
 * SECTION    : MW 12:00 TO 2:00PM
 * DUE DATE   : 01-30-2021
************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
/***********************************************************
 * Problem 1 (conversion)
 *----------------------------------------------------------
 * This program reads in the lenght in feet and inches then
 * the program will calculate the equivalent length in meters
 * and in centimeters
************************************************************/
using namespace std;
/***********************************************************
 * FUNCTION
 * *********************************************************
 * UserInput:
 *  Function calls by reference - getting info from feet
 *  and inches
 ***********************************************************/
void UserInput(double& feet, double& inches)
{
    cout << "\nEnter number of feet: ";
    cin  >> feet;
    cout << "Enter number of inches: ";
    cin  >> inches;
}

/***********************************************************
 * FUNCTION
 * *********************************************************
 * OutputStatement:
 * Functions output statement
 ***********************************************************/
void OutputStatement()
{
    cout << "\nConversion from feet and inches to meters and centimeters" << endl;
    cout <<"_________________________________________________________" << endl;
}

/***********************************************************
 * FUNCTION
 * *********************************************************
 * CalculateMeters:
 * function that calculates meters
 ***********************************************************/
double CalculateMeters(double feet, double inches, double meter)
{
    meter = (feet * 0.3048) + (inches * (0.3048/12));
    return meter;
}

/***********************************************************
 * FUNCTION
 * *********************************************************
 * CalculateCentimeters:
 * function that calculates centimeters
 ***********************************************************/
double CalculateCentimeters(double feet, double inches, double centimeters)
{
    centimeters = ((feet * 0.3048) + (inches * (0.3048/12)) - trunc((feet * 0.3048) + (inches * (0.3048/12)))) * 100;
    return centimeters;
}

/***********************************************************
 * FUNCTION
 * *********************************************************
 * OutputToUSer:
 * function that output conversion information to user
 ***********************************************************/

void OutputToUser(double feet, double inches, double meter, double centimeter)
{
    //OUTPUT and call for functions CalculateMeters and CalculateCentimeters
    cout << "Meters: "<< fixed << setprecision(2) << setw(10) << right;
    cout << CalculateMeters(feet, inches, meter)     << endl;
    cout << "Centimeters: " << fixed << setprecision (2) << CalculateCentimeters(feet, inches, centimeter) << endl;
}

int main (int argc, char **argv)
{
    // Variables
    double feet;
    double inches;
    double meter = 0;
    double centimeter = 0;

    //INPUT from user
    UserInput(feet, inches); // function call

    //OUTPUT to console
    OutputStatement();
    OutputToUser(feet, inches, meter, centimeter);  // function call

    return 0;
}