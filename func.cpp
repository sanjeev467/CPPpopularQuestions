#include <iostream>
using namespace std;
int sqr(int a)
{
    int square = a * a;
    return square;
}

int main()
{
    int ans = sqr(4);
    cout << ans << endl;
}