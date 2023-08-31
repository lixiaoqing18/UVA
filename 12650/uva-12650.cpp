#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r;
    while (cin >> n >> r)
    {
        int next;
        if(n == r) 
        {
            cout << "*";
            for(int i = 0;i < r; i++)
                cin >> next;
        }
        else
        {
            bool a[10001] = {false};
            for(int i = 0; i < r; i++)
            {
                cin >> next;
                a[next] = true;
            }
            for(int i = 1; i <= n; i++)
            {
                if(a[i] != true)
                {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}