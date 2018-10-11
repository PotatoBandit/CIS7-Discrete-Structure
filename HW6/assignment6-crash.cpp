//this version creates an infinite loop if you type in a decimal

#include <iostream>

using namespace std;

void getValues();
int GCD(int val1, int val2);

int main()
{
    int num1 = 0;
    int num2 = 0;
    char ans;

    cout << "Greatest Common Divisor Calculator." << endl;
    do
    {
        cout << "Enter Two Positive Integers: " << endl;

        do
        {
            cout << "Value 1: ";
            cin >> num1;

        } while (num1 <= 0 || num2 %1 != 0);

        do
        {
            cout << "Value 2: ";
            cin >> num2;

        } while (num2 <= 0 || num2 %1 != 0);

        int gcd = GCD(num1, num2);

        cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << "." << endl;

        cout << "Enter another set of values? (Y/N) " << endl;
        cin >> ans;

    } while (toupper(ans) == 'Y');
    return 0;

}

int GCD(int num1, int num2)
{
        if (num1 == 0)
        {
            return num2;
        }
        return GCD(num2 % num1, num1);

}

