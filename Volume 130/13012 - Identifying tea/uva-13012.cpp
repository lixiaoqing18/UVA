#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int count = 0;
        int a;
        for(int i = 0; i < 5; i++)
        {
            cin >> a;
            if(a == n) count ++;
        }
        cout << count << endl;
    }
    
    return 0;
}