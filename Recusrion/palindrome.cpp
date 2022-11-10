#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &str, int i, int j)
{
    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return isPalindrome(str, i + 1, j - 1);
    }
}

int main()
{
    string str = "abbccbba";
    bool x = isPalindrome(str, 0, str.length() - 1);
    if (x)
    {
        cout << " True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}