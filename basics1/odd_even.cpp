#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;

    cout << "\n\n---------- EVEN -------- \n\n";

    for (int i = 0; i <= n; i += 2)
    {
        cout << i << "\n";
    }

    cout << "\n\n---------- ODD -------- \n\n";

    for (int i = 1; i <= n; i += 2)
    {
        cout << i << "\n";
    }

    return 0;
}