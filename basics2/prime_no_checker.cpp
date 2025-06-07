#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number : ";
    cin >> num;

    int i = 2;
    for (i; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << "Not a prime ";
            break;
        }
    }

    if (i > num/2)
    {
        cout << "Prime";
    }

    return 0;
}