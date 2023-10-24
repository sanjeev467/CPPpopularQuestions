#include <iostream>

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
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    std::cout << max;

    return 0;
}