#include <iostream>
using namespace std;

int main()
{

    char name[] = {'C', '\0', '+', '+', '\0'};

    string str = "san\0jeev\0";

    cout << name << endl;
    cout << str << endl;

    return 0;
}