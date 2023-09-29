// #include <iostream>
#include <bits/stdc++.h>

int main()
{

    int n;
    std::cout << "Enter Your No: ";
    std::cin >> n;
    std::cout << "You Entered: " << n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "Elements in Array are: " << arr[i] << std::endl;
    }

    int largest = arr[0];
    int smallest = arr[0];
    int secongLargest = INT_MIN;
    int secondSmallest = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > secongLargest && arr[i] != largest)
        {
            secongLargest = arr[i];
        }

        if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    std::cout << largest << std::endl;

    std::cout << smallest << std::endl;

    std::cout << secongLargest << std::endl;

    std::cout << secondSmallest << std::endl;

    return 0;
}