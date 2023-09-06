#include <bits/stdc++.h>
using namespace std;
/*
两人玩猜数游戏，根据报数情况，判断是否有说谎
*/
int main()
{
    int n;
    string str1,str2;
    int low = 1, high = 10;
    while (cin >> n, n != 0)
    {
        cin >> str1 >> str2;
        if (str2 == "on")
        {
            if (n >= low && n <= high)
            {
                cout << "Stan may be honest" << endl;
            }
            else
            {
                cout << "Stan is dishonest" << endl;
            }
            low = 1;
            high = 10;
        }
        else if (str2 == "high")
        {
            if(n - 1 < high)
                high = n - 1;
        }
        else if(str2 == "low")
        {   
            if(n + 1 > low)
                low = n + 1;
        }
    }
    return 0;
}