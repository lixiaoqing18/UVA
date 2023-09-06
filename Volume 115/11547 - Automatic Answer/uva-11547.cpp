#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    while (n--)
    {
        cin >> a;
        int result = (a * 63 + 7492) * 5 - 498;
        cout << abs(result) % 100 / 10 << endl;
    }
    
    return 0;
}