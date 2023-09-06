#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        while (n--)
        {
            int f;
            cin >> f;
            int sum = 0;
            int a, b, c;
            while (f--)
            {
                cin >> a >> b >> c;
                sum += a * c;
            }
            cout << sum << endl;
        }
    }

    return 0;
}