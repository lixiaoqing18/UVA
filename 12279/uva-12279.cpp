#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int counter = 0;
    while (cin >> n, n != 0)
    {
        counter++;
        int notZeroTimes = 0;
        int zeroTimes = 0;
        int next;
        for (int i = 0; i < n; i++)
        {
            cin >> next;
            if(next > 0)
                notZeroTimes++;
            else
                zeroTimes++;
        }
        cout << "Case " << counter << ": " << notZeroTimes - zeroTimes << endl;
    }
    
    return 0;
}