#include <iostream>
using namespace std;
// Variables
double balance = 1000;
double deposit = 0;
int withdraw = 0;
int password = 1234;
int choice = 0;

// function to show menu of ATM
void show()
{
    cout << "***** Menu *****" << endl;
    cout << "1. balance" << endl;
    cout << "2. withDraw" << endl;
    cout << "3. deposit" << endl;
    cout << "4. Exit" << endl;
}

// function to process request
void process()
{
    cout << "Enter Your Password" << endl;
    cin >> password;
    do
    {
        if (password == 1234)
        {
            cout << "Enter Your Choice" << endl;
            cin >> choice;
            while (choice > 4)
            {
                cout << "Your choice is not correct, Enter Choice again!!!" << endl;
                cin >> choice;
            }
            switch (choice)
            {
            case 1:
                cout << "Your balance is " << balance << endl;
                break;
            case 2:
                cout << "Warning! Your balance is " << balance << endl;
                cout << "Enter your amount you want to withdraw" << endl;
                cin >> withdraw;
                if (withdraw <= balance)
                {
                    balance -= withdraw;
                    cout << "Now your balance is " << balance << endl;
                }
                else
                {
                    cout << "Sorry you can not withdraw this amount " << endl;
                }
                break;
            case 3:
                cout << "Your current balance is : " << balance << endl;
                cout << "Enter Your deposit money" << endl;
                cin >> deposit;
                balance += deposit;
                cout << "Now your balance is " << balance << endl;
                break;
            case 4:
                cout << "Thank You" << endl;
                break;
            default:
                cout << "Invalid choice, please pick 1-4.\n";
                break;
            }
        }
        else
        {
            cout << "Sorry! password is not correct, Do you want to try again? if yes write [Y] if no write [N]" << endl;
            char letter;
            cin >> letter;
            if (letter == 'Y' || letter == 'y')
            {
                cout << "Enter Your password";
                cin >> password;
            }
            else
            {
                cout << "Thank You";
                choice = 4;
            }
        }
    } while (choice != 4);
}
int main()
{
    show();
    process();
}