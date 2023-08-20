#include <iostream>
using namespace std;
void myFunction(int myNumbers[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }
}

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int myArray[] = {1, 2, 3, 4, 5};
    myFunction(myNumbers);
    myFunction(myArray);
    return 0;
}