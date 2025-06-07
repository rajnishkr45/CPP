#include <iostream>
using namespace std;
int main()
{
    cout << 1;
    cout << 2;
    cout << 3;
    cout << 4;
    cout << 5;

    cout << "\n\n";
    // This can be done in an efficient way called loops
    // There are 2 types of loop => Entry controlled loop and exit controlled loop
    // Entry controlled loops are of two types
    // 1. for loop
    // 2. while loop

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    // this will print 1 to 5 on the screen

    // while loop is used when we don't know how many times the loop will run

    cout << "\n\n";

    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
    // this will also print 1 to 5 on the screen

    // Break and continue statement
    // break statement is used to terminate the loop
    // continue statement is used to skip the current iteration of the loop

    for (int i = 1; i < 100; i++)
    {
        if (i == 42)
        {
            break; // Loop will exit from here
        }
        cout << i << endl;
    }

    for (int i = 1; i < 100; i++)
    {
        if (i == 42)
        {
            continue; // This will skip the current iteration and will move to the next iteration
        }
        cout << i << endl;
    }

    return 0;
}
