/*
 * Calculator.cpp
 *
 * 03/10/2025
 * Carlos Alvarado Calderon
 */

#include <iostream>

using namespace std;

int main() // Changed from 'void' to 'int' as standard C++ requires 'int' return type.
{
    double op1, op2;   // Switched from 'int' to 'double' to handle decimal values.
    char operation;
    char answer = 'Y'; // Corrected quotes to single quotes and initialized properly.

    while (answer == 'Y' || answer == 'y') // Loop now handles both uppercase and lowercase input.
    {
        cout << "Enter expression: " << endl;
        cin >> op1 >> operation >> op2; // Corrected the order to match user input.

        if (operation == '+') // Removed unnecessary semicolon.
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // Fixed operator from '>>' to '<<'.

        else if (operation == '-') // Changed to 'else if' for proper logic.
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // Fixed operator from '>>' to '<<'.

        else if (operation == '*') // Corrected displayed symbol from '/' to '*'.
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // Added missing semicolon.

        else if (operation == '/') // Corrected displayed symbol from '*' to '/'.
        {
            if (op2 == 0) // Added check for division by zero.
                cout << "Error: Division by zero!" << endl;
            else
                cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
        }
        else // Added else to catch invalid operations.
            cout << "Invalid operation!" << endl;

        cout << "Do you wish to evaluate another expression? (Y/N) " << endl;
        cin >> answer;
    }

    cout << "Program Finished." << endl; // Added message indicating the program has ended.

    return 0; // Standard practice to return 0 at the end of main.
}
