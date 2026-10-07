#include <iostream>

using namespace std;

int main()
{
    string s;
    bool numeric = true;

    cout << "Enter a value: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 48 || s[i] > 57)
        {
            numeric = false;
            break;
        }
    }

    if (numeric)
        cout << "Numeric Constant";
    else
        cout << "Not Numeric Constant";

    return 0;
}
