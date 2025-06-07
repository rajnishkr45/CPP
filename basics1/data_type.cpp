#include <iostream>
using namespace std;
int main()
{
    cout << "Namaste Dunia\n\n";

    // data types;

    int num = 45;
    cout << "Integer : " << num << endl;
    cout << "Size of integer : " << sizeof(num) << "\n\n";

    char ch = 'R';
    cout << "Character : " << ch << endl;
    cout << "Size of character : " << sizeof(ch) << "\n\n";

    float f = 4.5;
    cout << "Floating point : " << f << endl;
    cout << "Size of float : " << sizeof(f) << "\n\n";

    double d = 0.45;
    cout << "Double : " << d << endl;
    cout << "Size of double : " << sizeof(d) << "\n\n";

    bool b = true;
    cout << "Boolean : " << b << endl;
    cout << "Size of boolean : " << sizeof(b) << "\n\n";

    // TYPE CASTING

    int num2 = 'a'; // 97
    cout << num2 << endl;

    char ch2 = 65; // A
    cout << ch2 << endl;

    int div = 2 / 5; // ans = 0
    cout << div << endl;

    int div1 = 5.0 / 8; // ans = 0
    cout << div1 << endl;

    float div2 = 5.0 / 8; // ans = 0.625
    cout << div2 << endl;

    cout <<"Float division: " << 2.0 / 5 << endl; // output will be float
    cout <<"Integer division: "<< 2 / 5 << endl;   // output will be integer

    // OPERATORS

    //  => Relational operator

    //   1. Greater than <
    //   2. Less than >
    //   3. Greater than equal to <=
    //   4. Less than equal to >=
    //   5. Equal to ==
    //   6. Not equal to !=

    //  => Assignment operator

    //  assigned =

    // => Logical Operator

    // 1. and &&
    // 2. or ||
    // 3. not !

    return 0;
}