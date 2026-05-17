#include <iostream>
#include <algorithm>
using namespace std;

string keepAlpha(string s)
{

    string j = "";
    j.reserve(s.size());

    for (auto x : s)
    {
        if (tolower(x) >= 97 && tolower(x) <= 122 || tolower(x) >= 48 && tolower(x) <= 57)
        {
            j += tolower(x);
        }
    }

    return j;
}

string reverseString(string s)
{

    reverse(s.begin(), s.end());

    return s;
}

bool isPalindrome(string s)
{
    cout << reverseString(keepAlpha(s));
    cout << endl
         << keepAlpha(s);

    return reverseString(keepAlpha(s)) == keepAlpha(s);
}

int main()
{

    cout << isPalindrome("A man, a plan, a canal: Panama");
    cout << isPalindrome("a car");
    cout << isPalindrome("09");

    return 0;
}