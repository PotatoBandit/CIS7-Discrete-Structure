//Rebecca Carter - ID:2648939

#include<iostream>
#include<string>
#include<regex>
using namespace std;

int main()
{
    string input;
    cout << "Enter in a WFF, and I will tell you if it is valid." << endl;
    cout << "Type quit to exit" << endl;
    cout << "Valid Connectors: ^ V ! -> " << endl;
    cout << "Enter input: ";

    regex reg("^\\s*!?\\s*[A-UW-Z]\\s*((\\^|V|->)\\s*!?\\s*[A-UW-Z]\\s*)*$");

    do
    {
        getline(cin,input);

        if (regex_match(input,reg))
        {
            cout << input << " match." << endl;
        }

        else if (input != "quit")
        {
            cout << input << " No match" << endl;
        }

    }while(input != "quit");

    return 0;
}

/*
 * OUTPUT:
 * Enter in a WFF, and I will tell you if it is valid.
    Type quit to exit
    Valid Connectors: ^ V ! ->
    Enter input: A match.
    !A match.
    !a No match
    A^B match.
    AVB match.
    A|B No match
    A^B^C match.
    AVBVC match.
    (A^B) V C No match      //parentheses not list in hw assignment, not supported
    A ^ ( B V C) No match
    A -> B match.
    A -> !B match.

*/
