#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "abaabaaavn";
    // 26 ke size ka array banana hain ktuki 26 characters hote hain total
    int freq[26];

    // ab sab characters ke frequeny matlab count ko 0 kr denge

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    // ab string mein iterate karenge and count badhate jayenge har ek character ka jab jab tackle krenge string mein

    for (int i = 0; i < str.length(); i++)
    {
        freq[str[i] - 'a']++;
        // ye upar wali line samajhiy.....lets take s[i] ka value a aa gaya to a -a 0 aa jayega to == krdo frrquency ko
        // jisse count badh sake chars ka
        // freq[s[i] - 'a'] this is showing index of a particular char
    }

    // ab ans store karenge and maxfrq store karenge

    char ans = 'a';
    // ans a maan lenge pehle
    int mxfreq = 0;
    // max frequency 0 maan lenge

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > mxfreq)
        {
            mxfreq = freq[i];
            ans = i + 'a';
        }
    }

    cout << mxfreq << " " << ans << endl;

    return 0;
}