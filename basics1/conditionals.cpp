#include <iostream>
using namespace std;
int main()
{

    // if else ladder

    int num;
    cout << "Enter the age: ";
    cin >> num;

    if (num < 18)
    {
        cout << "You are under aged !\n";
    }
    else
    {
        cout << "Your age is legal";
    }

    // if , if else , else ladder

    if (num < 18 && num > 0)
    {
        cout << "You are under aged !";
    }
    else if (num <= 0)
    {
        cout << "You Entered invalid age !";
    }
    else
    {
        cout << "Your age is legal";
    }

    return 0;
}