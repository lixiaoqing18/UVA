#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int max = 0;
        while (n--)
        {
            int s;
            cin >> s;
            if(s > max) max = s;
        }
        cout << "Case " << i << ": " << max << endl;
    }
    return 0;
}