#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n;
    while (cin >> n)
    {
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        //项数：(an-a1)/d ，求和(a1+an)项数/d
        long long lastNum = ((n - 1) / 2 + 1) * (1 + n) / 2;
        cout << 3 + 2 * (3 * lastNum - 6) << endl;
    }
    
    return 0;
}