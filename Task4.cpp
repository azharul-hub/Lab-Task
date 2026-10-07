#include <iostream>

using namespace std;

int main()
{
    string input;
    bool valid = true;

    cout << "Enter an identifier: ";
    cin >> input;

    if (!isalpha(input[0]) && input[0] != '_')
    {
        valid = false;
    }
    else
    {
        for (int i = 1; i < input.length(); i++)
        {
            if (!isalnum(input[i]) && input[i] != '_')
            {
                valid = false;
                break;
            }
        }
    }

    if (valid)
        cout << "Valid Identifier" << endl;
    else
        cout << "Invalid Identifier" << endl;

    return 0;
}
