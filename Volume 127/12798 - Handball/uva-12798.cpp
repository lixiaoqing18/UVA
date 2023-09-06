#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    
    while (cin >> n >> m)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            bool findone = true;
            for (int j = 0; j < m; j++)
            {
                int s;
                cin >> s;
                if(!findone) continue;
                if(s == 0) findone = false;
            }
            if(findone) count++;
        }
        cout << count << endl;
    }
    
    return 0;
}