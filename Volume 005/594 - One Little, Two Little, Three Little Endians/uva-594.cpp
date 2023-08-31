#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n)
    {
        int a1 = (n << 24) & (255 << 24);
        int a2 = (n << 8) & (255 << 16);
        int a3 = (n >> 8) & (255 << 8);
        int a4 = (n >> 24) & 255;
        int s = a1 | a2 | a3 | a4;
        cout << n << " converts to " << s << endl;
    }   
    return 0;
}