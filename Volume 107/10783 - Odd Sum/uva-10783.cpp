#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        int sum = 0;
        for(int j = a; j <= b; j++)
        {
            if(j % 2 == 1)
            {
                sum += j;
            }
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}