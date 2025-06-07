#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter the value of A and B: ";
    cin >> a >> b;

    if (a < b)
    {
        cout << "B is Greater" << endl;
    }
    else if (a > b)
    {
        cout << "A is Greater" << endl;
    }
    else
    {
        cout << "Both are equal" << endl;
    }
    return 0;
}