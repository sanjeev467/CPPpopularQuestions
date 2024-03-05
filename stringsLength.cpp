#include <iostream>
using namespace std;

int getLength(char name[])
{
    // in array we declare size of array too here in char arr no need to give size
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[20];
    cout << "Enter your name:" << endl;
    cin >> name;

    cout << "you name is";
    cout << name << endl;
    ;

    cout << "length : " << getLength(name) << endl;

    return 0;
}