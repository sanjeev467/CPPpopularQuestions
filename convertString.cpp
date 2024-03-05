#include <iostream>
#include <string>
using namespace std;

int main()
{
    // convert to upper case mein minus karenge
    // string str = "agfggvgevh";
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
    // }
    // cout << str;

    // to lower case
    string str = "ANBVSGHVJHA";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
    cout << str;

    return 0;
}
