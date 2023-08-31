#include <bits/stdc++.h>
using namespace std;

int m[1000000000];

int f(int n) 
{
    if(m[n] != 0) return m[n];
    if(n == 1) return 1;
    if(n == 3) return 3;
    int s = n + f(n - 2) + f(n - 4);
    m[n] = s;
    return s;
}

int main()
{
    int a;
    while (cin >> a)
    {
        if(a == 1) {
            cout << 1 << endl;
            continue;
        }
        int start = f(a);
        cout << 3 * start + 2 * (3 * a - 6) << endl;
    }
    
    return 0;
}