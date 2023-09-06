#include <bits/stdc++.h>
using namespace std;
/*
给定X0，递推公式Xi+1 = Xi的各个数字的和，求最小的i，使得Xi = Xi-1
x0可能是很长的数字
*/

int main() {
    string a;
    while(cin >> a, a != "END") {
        if(a == "1") {
            cout << 1 << endl;
            continue;
        }
        int no = 1;
        int b = a.size();
        while (no++ && b != 1)
        {
            b = (int)log10(b) + 1;
        }
        cout << no << endl;
    }
    return 0;
}