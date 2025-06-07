#include <iostream>
using namespace std;
int main()
{
    int n, i = 2, sum = 0;

    cout << "Enter any number : ";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of all even number till " << n << " is : " << sum << endl;
    return 0;
}