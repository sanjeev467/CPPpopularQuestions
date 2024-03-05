#include <iostream>
using namespace std;
int main()
{
    cout << "take input no" << endl;
    int n;
    cin >> n;
    int arr[n];

    cout << "take input array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "output array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}