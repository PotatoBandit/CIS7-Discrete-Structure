//Rebecca Carter - ID:2648939

#include<iostream>
#include<string>
#include<regex>
using namespace std;

int parentheses_are_valid(string input);

int main()
{
    string input;
    cout << "Enter in a WFF, and I will tell you if it is valid." << endl;
    cout << "Type quit to exit" << endl;
    cout << "Valid Connectors: ^ V ! -> " << endl;
    cout << "Enter input: ";

    regex reg("^\\s*!?\\(?*\\s*[A-UW-Z]\\s*\\)?*\\s*((\\^|V|->)\\s*!?\\(?*\\s*\\s*[A-UW-Z]\\s*\\)?*\\s*)*$");

    do
    {
        getline(cin,input);

        int parentheses = parentheses_are_valid(input);

        if (parentheses != 0)
        {
            cout << "invalid parenthetical syntax used." << endl;
        }
        else
        {

            if (regex_match(input,reg))
            {
                cout << input << " match." << endl;
            }

            else if (input != "quit")
            {
                cout << input << " No match" << endl;
            }
        }


    }while(input != "quit");
    return 0;
}

 int parentheses_are_valid(string input)
{
    int parentheses = 0;
    for ( unsigned long i = 0; i < input.size() ; i ++)
    {
        if (input.at(i) == '(')
        {
            parentheses ++;
        }
        if (input.at(i) == ')')
        {
            parentheses--;
        }
        if (parentheses < 0)
        {
            return parentheses;
        }
    }
    return parentheses;
}

