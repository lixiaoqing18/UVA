#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    bool markup = true;
    while (cin.get(c))
    {
        if (c == '\\')
        {
            cin.get(c);
            if (c == '*')
            {
                markup = !markup;
                continue;
            }
            if (!markup)
            {
                if (c == '\\')
                {
                    cout << '\\';
                    cin.unget();
                }
                else
                {
                    cout << '\\' << c;
                }
                continue;
            }
            if (c == 'b' || c == 'i')
            {
                continue;
            }

            if (c == '\\')
            {
                cout << c;
                continue;
            }
            if (c == 's')
            {
                int dots = 0;
                while (cin.get(c))
                {
                    if (isdigit(c))
                        continue;
                    if (c == '.' && dots == 0)
                    {
                        dots++;
                        continue;
                    }
                    cin.unget();
                    break;
                }
                continue;
            }
            cout << c;
        }
        else
        {
            cout << c;
        }
    }
    return 0;
}