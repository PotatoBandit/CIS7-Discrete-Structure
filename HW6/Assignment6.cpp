#include <iostream>
#include <regex>
using namespace std;

void getValues();
int GCD(int val1, int val2);

int main()
{
    string val1;
    string val2;
    int num1 = 0;
    int num2 = 0;
    char ans;
    //regular expression for any whole number greater than zero.
    regex rx("[1-9][0-9]*");

    cout << "Greatest Common Divisor Calculator." << endl;
    do
    {
        cout << "Enter Two Positive Integers: " << endl;

        do
        {
        cout << "Value 1: ";
        cin >> val1;

        } while (!regex_match(val1,rx));

        do
        {
        cout << "Value 2: ";
        cin >> val2;

        } while (!regex_match(val1,rx));

        int gcd = GCD(num1 =stoi(val1), num2 = stoi(val2));
        cout << "GCD of " << val1 << " and " << val2 << " is " << gcd << "." << endl;
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

