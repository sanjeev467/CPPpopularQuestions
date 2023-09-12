// Problem Statement
// You have been given an integer array/list(ARR) of size N. Where N
// is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and
// one number is present only once.
// You need to find and return that number which is unique in the
// array/list.

#include <iostream>
using namespace std;

int main() int findUnique(int *arr, int size)
{
    // Write your code here

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}