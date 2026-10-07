#include <iostream>

using namespace std;

int main()
{
  char ch;

    cout << "Enter expression: ";
     while (cin >> ch)
    {
        if (ch == '+')
            cout << "Operator: " << ch << " (Addition)" << endl;

        else if (ch == '-')
            cout << "Operator: " << ch << " (Subtraction)" << endl;
             else if (ch == '*')
            cout << "Operator: " << ch << " (Multiplication)" << endl;

        else if (ch == '/')
            cout << "Operator: " << ch << " (Division)" << endl;

        else if (ch == '%')
            cout << "Operator: " << ch << " (Modulus)" << endl;

        else if (ch == '=')
            cout << "Operator: " << ch << " (Assignment)" << endl;
    }

    return 0;
}
