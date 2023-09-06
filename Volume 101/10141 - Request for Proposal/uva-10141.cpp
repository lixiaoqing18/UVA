#include <bits/stdc++.h>
using namespace std;
/*
找需求满足比例最高的方案，需求满足比例相同时找价低的方案，价格相同时找第一个
*/
int main()
{
    int n, p;
    int index = 0;
    while (cin >> n >> p, n != 0 && p != 0)
    {
        index++;
        for (int i = 0; i <= n; i++)
        {
            cin.ignore(1024, '\n');
        }
        string name, theName;
        double price;
        double maxCompiance = 0.0, minPrice = numeric_limits<double>::max();
        int m;
        
        while (p--)
        {
            getline(cin, name);
            cin >> price >> m;
            double compliance = (double)m / n;
            if(compliance > maxCompiance) {
                theName = name;
                maxCompiance = compliance;
                minPrice = price;
            } else if(compliance == maxCompiance) {
                if(price < minPrice) {
                    theName = name;
                    minPrice = price;
                }
            }
            for(int i = 0; i <= m; i++) {
                cin.ignore(1024, '\n');
            }
        }
        if(index > 1) {
            cout << endl;
        }
        cout << "RFP #" << index << endl;
        cout << theName << endl;
        
    }

    return 0;
}