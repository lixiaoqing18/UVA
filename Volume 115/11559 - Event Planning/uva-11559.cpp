#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, h, w;
    while (cin >> n >> b >> h >> w)
    {
        int min = 1000000;
        for (int i = 0; i < h; i++)
        {
            int p;
            cin >> p;
            int amout = n * p;

            for (int j = 0; j < w; j++)
            {
                int beds;
                cin >> beds;
                if (beds >= n)
                {
                    if (amout <= min)
                    {
                        min = amout;
                    }
                }
            }
        }
        if (min != -1 && min <= b)
        {
            cout << min << endl;
        }
        else
        {
            cout << "stay home" << endl;
        }
    }

    return 0;
}