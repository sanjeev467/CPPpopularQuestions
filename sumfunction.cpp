#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int total = a + b;

    return total;
}

int main()
{
    int a = 20;
    int b = 30;

    int total = sum(20, 30);
    cout << total << endl;
}