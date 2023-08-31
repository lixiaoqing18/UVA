#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, l;
        cin >> n >> l;
        int a[n], b[n];
        bool success = true;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
            if (b[j] < a[j])
                success = false;
        }
        if (sum > l)
            success = false;
        cout << "Case " << i << ": " << (success ? "Yes" : "No") << endl;
    }

    return 0;
}