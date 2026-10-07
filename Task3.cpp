#include <iostream>

using namespace std;

int main()
{
    string input;

    cout << "Enter a line: ";
    getline(cin, input);

    if (input.substr(0, 2) == "//")
    {
        cout << "It is a Single Line Comment." << endl;
    }
    else if (input.substr(0, 2) == "/*")
    {
        if (input.length() >= 4 &&
            input.substr(input.length() - 2) == "*/")
        {
            cout << "It is a Multiple Line Comment." << endl;
        }
        else
        {
            cout << "It is the Starting Line of a Multiple Line Comment." << endl;
        }
    }
    else
    {
        cout << "It is NOT a Comment Line." << endl;
    }

    return 0;
}
