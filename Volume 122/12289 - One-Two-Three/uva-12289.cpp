#include <bits/stdc++.h>
using namespace std;
/*
小朋友只会写one-two-three，但有可能写错字母，最多只会错一个，字母数不会少，要求识别输入的数字
*/
int main()
{
    int n;
    cin >> n;
    string word;
    string numbers[3] = {"one", "two", "three"};
    while (n--) {
        cin >> word;

        for(int i = 0; i < 3; i++) {
            int diff = 0;
            if(word.size() != numbers[i].size()) {
                continue;
            }
            for(int j = 0; j < word.size(); j++) {
                if(word[j] != numbers[i][j]) {
                    diff++;
                }
            }
            if(diff <= 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    
    return 0;
}