#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, u, d, f;

    while (cin >> h >> u >> d >> f, h != 0)
    {
        int day = 0;
        double dis = 0.0;
        double decre = u * f / 100.0;
        while (++day)
        {
            double disInDay = u - decre * (day - 1);
            if (disInDay > 0)
                dis += disInDay;
            if (dis > h)
            {
                cout << "success on day " << day << endl;
                break;
            }
            dis -= d;
            if (dis < 0)
            {
                cout << "failure on day " << day << endl;
                break;
            }
        }
    }

    return 0;
}