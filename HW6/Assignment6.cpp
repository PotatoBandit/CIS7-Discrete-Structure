
#include <iostream>
#include <regex>
#include <chrono>
using namespace std;

void getValues();
int GCD(int val1, int val2);
static int stuff = 0;

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

        } while (!regex_match(val2,rx));

        chrono::high_resolution_clock::time_point t1 = chrono::high_resolution_clock::now();

        int gcd = GCD(num1 =stoi(val1), num2 = stoi(val2));

        chrono::high_resolution_clock::time_point t2 = chrono::high_resolution_clock::now();

        auto duration = chrono::duration_cast<chrono::microseconds>( t2 - t1 ).count();
        auto nanduration = chrono::duration_cast<chrono::nanoseconds>( t2 - t1 ).count();

        cout << "GCD of " << val1 << " and " << val2 << " is " << gcd << "." << endl;
        cout << "Duration: " << duration << " microseconds. (" << nanduration << " nanoseconds)" << endl;
        cout << "Enter another set of values? (Y/N) " << endl;
        cin >> ans;

    } while (toupper(ans) == 'Y');
    return 0;

}

int GCD(int num1, int num2)
{
        stuff++;
        if (num1 == 0)
        {
            return num2;
        }
        return GCD(num2 % num1, num1);
}
