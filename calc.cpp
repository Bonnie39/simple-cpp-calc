#include <iostream>
using namespace std;

int main()
{
    int numOne, numTwo, sum;
    char operation;

    cout << "Welcome to the Basic C++ Calculator!" << endl << "Type your first number (left side of equation) to begin: ";
    cin >> numOne; cout << "" << endl;

    cout << "Alright, now type your second number (right of equation): ";
    cin >> numTwo; cout << "" << endl;

    cout << "Now, what would you like to do with these two numbers?" << endl << "a - add" << endl << "s - subtract" << endl << "d - divide" << endl << "m - multiply" << endl;
    cout << "" << endl;
    cin >> operation; cout << "" << endl;

    switch(operation)
    {
        case 'a':
            sum = numOne + numTwo;
            cout << "Your asnwer is: " << sum << endl; cout << "" << endl;
            system("pause");
            return 0;
            break;
        case 's':
            sum = numOne - numTwo;
            cout << "Your asnwer is: " << sum << endl; cout << "" << endl;
            system("pause");
            return 0;
            break;
        case 'd':
            sum = numOne / numTwo;
            cout << "Your asnwer is: " << sum << endl; cout << "" << endl;
            system("pause");
            return 0;
            break;
        case 'm':
            sum = numOne * numTwo;
            cout << "Your asnwer is: " << sum << endl; cout << "" << endl;
            system("pause");
            return 0;
            break;
        case 'z':
            cout << "Hey! That wasn't an option!" << endl; cout << "" << endl;
            system("pause");
            return 0;
            break;
    }
}