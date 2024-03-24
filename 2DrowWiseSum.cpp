#include <iostream>
using namespace std;

void printRowSum(int arr[][3], int row, int col)
{
    cout << "printing row sum" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << endl;
    }

    cout << endl;
}

int main()
{

    int arr[3][3];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << endl;

    printRowSum(arr, 3, 3);

    return 0;
}