// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "take input no" << endl;
//     int n;
//     cin >> n;
//     int arr[n];

//     cout << "take input array" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "output array" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << sizeof(arr[0]);

    return 0;
}
