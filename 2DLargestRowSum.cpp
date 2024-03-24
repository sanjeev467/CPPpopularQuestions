#include <iostream>
#include <climits>

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

int largestRowSum(int arr[][3], int row, int col)
{

    int max = INT_MIN;
    // to print the row index we will declare a variable int to -1, cause every time row sum will be different
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > max)
        {
            max = sum;
            rowIndex = row;
        }
    }

    cout << "Max sum is: " << max << endl;
    return rowIndex;
}

int main()
{

    int arr[3][3];

    cout << "input array elements" << endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << endl;

    printRowSum(arr, 3, 3);

    int ansIndex = largestRowSum(arr, 3, 3);
    cout << "max row is at index: " << ansIndex << endl;

    return 0;
}