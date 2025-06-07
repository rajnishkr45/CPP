#include <iostream>
using namespace std;

int main()
{
    int p, t, r;
    cout << "Enter P, R and : ";
    cin >> p >> r >> t;

    float si = p * t * r / 100;

    cout << "Simple Interst is : " << si << endl;

    return 0;
}