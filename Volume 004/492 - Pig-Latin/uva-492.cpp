#include <bits/stdc++.h>
using namespace std;
/*
a,e,i,o,u开头的单词追加ay，其他的把首字母放到末尾，再追加ay
*/

bool is_aeiou(char c)
{
    return c == 'a' || c == 'A' ||
           c == 'e' || c == 'E' ||
           c == 'i' || c == 'I' ||
           c == 'o' || c == 'O' ||
           c == 'u' || c == 'U';
}
int main()
{
    cin.unsetf(ios::skipws);
    char cur, pre = ' ';
    char first;
    while (cin >> cur)
    {
        if (isalpha(cur) && !isalpha(pre))
        {
            if (is_aeiou(cur))
            {
                cout << cur;
                first = -1;
            }
            else
            {
                first = cur;
            }
        }
        else if (!isalpha(cur) && isalpha(pre))
        {
            if (first != -1)
            {
                cout << first;
            }
            cout << "ay" << cur;
        }
        else
        {
            cout << cur;
        }
        pre = cur;
    }
    return 0;
}