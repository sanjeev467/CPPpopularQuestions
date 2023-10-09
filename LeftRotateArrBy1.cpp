#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n)
{
    // Write your code here.
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
    }
    return arr;
}
