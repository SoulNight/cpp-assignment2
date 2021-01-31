/***********************************************************
 * AUTHOR     : TONY BAUTISTA
 * STUDENT ID : 2371710
 * CLASS      : CPSC 298
 * SECTION    : MW 12:00 TO 2:00PM
 * DUE DATE   : 01-30-2021
************************************************************/
#include <iostream> // pre-processor directive
/***********************************************************
 * Problem 1 (intArray)
 *----------------------------------------------------------
 * This program prompts will prompt the user for ten
 * non-negative numbers and outputs to the screen
************************************************************/

using namespace std; // library fro input and output

int main(int argc, char **argv) {
    const int ARRAY_SIZE = 10;           // CONST - array size
    unsigned int number_array[ARRAY_SIZE]; // delcares array

    // INPUT - user will enter in 10 integers
    cout << "Enter 10 positive integers: " << endl;

    // LOOP - for saving information to array
    for (unsigned int & indexLoop : number_array)
    {
        cin >> indexLoop; // saves info to array
    }

    // OUPUT - to user screen
    cout <<"\nBelow are the numbers you entered "<< endl;
    cout << "-----------------------------------"<< endl;
    for (unsigned int indexLoop : number_array)
    {
        cout << indexLoop << endl;
    }
    return 0;
}

