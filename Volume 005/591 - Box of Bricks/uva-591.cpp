#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int counter = 0;
    while (cin >> n, n != 0)
    {
        counter++;
        int a[n];
        int sum = 0, avg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        avg = sum / n;
        int times = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] > avg)
            {
                times += a[i] - avg;
            }
        }
        cout << "Set #" << counter << endl;
        cout << "The minimum number of moves is " << times << "." << endl;
        cout << endl;
    }
    
    return 0;
}