#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        int n;
        cin >> n;
        int miles = 0;
        int juices = 0;
        while (n--)
        {
            int duration;
            cin >> duration;
            miles += (duration / 30 + 1) * 10;
            juices += (duration / 60 + 1) * 15;
        }
        cout << "Case " << i << ": ";
        if(miles < juices) cout << "Mile " << miles << endl;
        else if(miles > juices) cout << "Juice " << juices << endl;
        else cout << "Mile Juice " << miles << endl;
    }
    return 0;
}