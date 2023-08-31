#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, n;
    while (cin >> b >> n, b != 0 && n != 0)
    {
        int r[b + 1];
        for(int i = 1; i <= b; i++)
        {
            cin >> r[i];
        }
        for(int i = 0; i < n; i++)
        {
            int from, to, amount;
            cin >> from >> to >> amount; 
            r[from] -= amount;
            r[to] += amount;
        }
        bool success = true;
        for(int i = 1; i <= b; i++)
        {
            if(r[i] < 0)
            {
                success = false;
                break;
            }
        }
        cout << (success ? "S" : "N") << endl;
    }
    
    return 0;
}