#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include "resource.h"
#pragma comment(lib, "winmm.lib")
using namespace std;

int main()
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int redColor = 12;
    int defaultColor = 7;

    int numOne, numTwo, sum;
    char operation;

    cout << "Welcome to the Basic C++ Calculator!" << endl << "Type your first number (left side of equation) to begin: ";
    cin >> numOne; cout << "" << endl;

    cout << "Alright, now type your second number (right of equation): ";
    cin >> numTwo; cout << "" << endl;

    cout << "Now, what would you like to do with these two numbers?" << endl << "a - add" << endl << "s - subtract" << endl << "d - divide" << endl << "m - multiply" << endl;
    cout << "" << endl;
    cin >> operation; cout << "" << endl;

    switch (operation)
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
            if (numOne == 666 && numTwo == 666)
            {
                SetConsoleTextAttribute(hConsole, redColor);
                PlaySound(MAKEINTRESOURCE(IDR_WAVE2), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
                int i = 0;
                while (true)
                {
                    cout << "PLEASE" << endl;
                    cout << "HELP ME" << endl;
                    i++;
                    if (i == 66666)
                    {
                        SetConsoleTextAttribute(hConsole, defaultColor);
                        break;
                    }
                }
            }
            cout << "Close the program now. (Press any key)" << endl;
            cin.get();
            return 0;
            break;
    }
}