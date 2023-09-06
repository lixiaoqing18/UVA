#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool a[5];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4])
    {
        bool b[5];
        bool match = true;
        for(int i = 0; i < 5; i++)
        {
            cin >> b[i];
            if(!match) continue;
            if(b[i] == a[i]) match = false;
        }
        cout << (match ? "Y" : "N") << endl;
    }
    
    return 0;
}