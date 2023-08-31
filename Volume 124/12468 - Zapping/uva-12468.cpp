#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b, a != -1 && b != -1)
    {
        cout << min((b + 100 - a) % 100, (a + 100 - b) % 100) << endl;
    }
    
    return 0;
}