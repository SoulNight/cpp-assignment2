/***********************************************************
 * AUTHOR     : TONY BAUTISTA
 * STUDENT ID : 2371710
 * CLASS      : CPSC 298
 * SECTION    : MW 12:00 TO 2:00PM
 * DUE DATE   : 01-30-2021
************************************************************/
#include <iostream>
#include <iomanip>

/***********************************************************
 * Problem 2 (SalesTax)
 *----------------------------------------------------------
 * This program has two function: one function calculates
 * the sales tax, the second function outputs info to
 * user for display to console.
************************************************************/

using namespace std;

// FUNCTION - process tax information and returns cost
float AddTax(float taxRate, float cost)
{
    // PROCESSING 
    cost = cost + (cost*(taxRate/100));
    return cost;
}

void OutputToUser()
{
    cout << "\nYour product purchase price $29.99 "<< endl;
    cout << "The state tax is 7.25% " << endl;
    cout << "Your grand total with state tax is: $";
}

int main (int argc, char **argv)
{
    // OUTPUT - to console
    OutputToUser();
    cout << fixed << setprecision(2) << AddTax(7.25, 29.99) << endl;

    return 0;
}