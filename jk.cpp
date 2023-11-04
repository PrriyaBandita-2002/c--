#include <iostream>
using namespace std;

int main()
{
    int a = 6;
    int *b;
    b = &a;
    // what is pointer ?
    // Data type which holds the address of other data types
    cout << "The address of a is" << &a << endl;        // The address of a is 0x61ff08
    cout << "the address of a is " << b << endl;        // The address of a is 0x61ff08
    cout << "the value at address b is " << *b << endl; // the value at address b is 6
    int **c = &b;
    cout << "the address of b is" << &b << endl; // the address of a is 0x61ff08
    cout << "the address of b is" << c << endl;  // the address of a is 0x61ff08
    cout << "the value at the  address of c is" << *c << endl;
    cout << "the value at address value_at(value_at(c))is " << **c << endl;
    // the value at address value_at(value_at(c))is 6
    return 0;
}
