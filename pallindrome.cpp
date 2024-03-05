#include <iostream>
using namespace std;

bool checkpallindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
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

    cout << "your name is " << name << endl;
    int len = getLength(name);

    cout << "Length:" << len << endl;

    reverse(name, len);
    cout << "Name:" << name << endl;

    cout << "pallindrome or not:" << checkpallindrome(name, len) << endl;

    return 0;
}