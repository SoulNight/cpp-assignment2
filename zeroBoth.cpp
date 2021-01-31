/***********************************************************
 * AUTHOR     : TONY BAUTISTA
 * STUDENT ID : 2371710
 * CLASS      : CPSC 298
 * SECTION    : MW 12:00 TO 2:00PM
 * DUE DATE   : 01-30-2021
************************************************************/
#include <iostream>

using namespace std;
/***********************************************************
 * Problem 2 (ZeroBoth)
 *----------------------------------------------------------
 * This program prompts uses a void function ZeroBoth that
 * has two call-by-reference parameters of type int. This
 * program changes two integers to Zero.
************************************************************/

//Function ZeroBoth - parameters(int, int)
void ZeroBoth(int& firsNumber, int& secondNumber)
{
    //changes numbers to zero call by reference
    firsNumber = 0; // setting numbers to zero
    secondNumber = 0; // setting number to Zero
}

int main (int argc, char **argv) {

    // VARIABLES
    int firsNumber   = 1; //setting firstNumber to 1
    int secondNumber = 3; //setting secondNumber to 3

    // OUTPUT to screen
    cout << "\nInteger values that we are set to change: ";
    cout << firsNumber << " and " << secondNumber << endl;

    // Function call changing numbers to zero
    ZeroBoth(firsNumber, secondNumber);

    // OUTPUT to screen
    cout << "\nInteger values after we Zero'd both of the integers: ";
    cout << firsNumber << " and " << secondNumber << endl << endl;

    return 0;
}
