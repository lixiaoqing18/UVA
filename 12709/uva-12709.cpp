#include <bits/stdc++.h>
using namespace std;
/*
求一堆正方体中高最大的体积中最大的
*/
int main()
{
    int t;
    while (cin >> t, t != 0)
    {
        int l,w,h;
        int maxH = 0;
        int maxV = 0;
        for(int i = 0; i < t; i++)
        {
            cin >> l >> w >> h;
            int v = l * w * h;
            if(h > maxH || h == maxH && v > maxV)
            {
                maxH = h;
                maxV = v;
            }
        }
        cout << maxV << endl;
    }
    
    return 0;
}