#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter any number : ";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << "Sum of " << n << " is : " << sum << endl;
    return 0;
}