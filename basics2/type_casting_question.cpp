#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character or value : ";
    cin >> ch;

    int converted_value = int(ch);

    if (converted_value >= 48 && converted_value <= 57)
    {
        cout << "You entered a number" << endl;
    }
    else if (converted_value >= 65 && converted_value <= 90)
    {
        cout << "You entered an upper case letter" << endl;
    }
    else if (converted_value >= 97 && converted_value <= 122)
    {
        cout << "You enterd a lower case letter" << endl;
    }
    else
    {
        cout << "Invalid Output" <<endl;
    }

    return 0;
}