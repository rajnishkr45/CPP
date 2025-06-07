#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1, i = 1;

    cout << "Enter any number : ";
    cin >> num;

    for (i; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial of " << num << " is : " << fact << endl;

    return 0;
}