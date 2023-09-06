#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b;
    while (n--)
    {
        cin >> a >> b;
        int s = a - b;
        cout << (s < 0 ? '<' : (s > 0 ? '>' : '=')) << endl;
    }

    return 0;
}