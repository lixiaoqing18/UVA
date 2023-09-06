#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int j = 1; j <= n; j++)
    {
        int max = -1, maxi;
        int min = 20000, mini;
        int a[3];
        for(int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if(a[i] > max)
            {
                max = a[i];
                maxi = i;
            } 
            if(a[i] < min)
            {
                min = a[i];
                mini = i;
            }
        }
        cout << "Case " << j << ": " << a[3 - maxi - mini] << endl;
    }
    
    return 0;
}