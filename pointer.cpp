#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    cout << i << endl;
    cout << "Address : " << &i << endl;

    int *iptr = &i;
    cout << "iptr  : " << iptr << endl;
    cout << "*iptr :" << *iptr << endl;

    *iptr = 11;
    cout << "iptr  : " << iptr << endl;
    cout << "*iptr :" << *iptr << endl;

    iptr++;
    cout << "iptr  : " << iptr << endl;
    cout << "*iptr :" << *iptr << endl;
}
