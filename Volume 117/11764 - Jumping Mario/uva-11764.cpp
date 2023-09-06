#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int pre, cur;
        int high_jumps = 0, low_jumps = 0;
        cin >> cur;
        pre = cur;
        for (int j = 2; j <= n; j++)
        {
            cin >> cur;
            if (cur - pre > 0)
            {
                high_jumps++;
            }
            else if (cur - pre < 0)
            {
                low_jumps++;
            }
            pre = cur;
        }
        cout << "Case " << i << ": " << high_jumps << " " << low_jumps << endl;
    }
    return 0;
}