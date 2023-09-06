#include <bits/stdc++.h>
using namespace std;
/*
把文本中的第一个"替换为``，第二格"替换为''，以此类推
*/
int main()
{
    cin.unsetf(ios::skipws);
    char c;
    int seq = 0;
    while(cin >> c) {
        if(c != '"') {
            cout << c;
        } else {
            seq = (seq + 1) % 2;
            if(seq == 1) {
                cout << "``";
            } else {
                cout << "''";
            }
        }
    }
    return 0;
}