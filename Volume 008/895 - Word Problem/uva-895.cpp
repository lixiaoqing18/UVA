#include <bits/stdc++.h>
using namespace std;

vector<string> dict;

bool can_spell(string source, string pattern) {
    int count = 0;
    for(int i = 0; i < source.size(); i++) {
        for(int j = 0; j < pattern.size(); j++) {
            if(source[i] != ' ' && pattern[j] != ' ' && source[i] == pattern[j]) {
                count++;
                pattern[j] = ' ';
                break;
            }
        }
    }
    if(count >= pattern.size()) {
        return true;
    }
    return false;
}

int main()
{
    int i = 0;
    string str;
    while (getline(cin, str) , str != "#") {
        dict.push_back(str);
    }

    while (getline(cin, str), str != "#")
    {
        int count = 0;
        for(int i = 0; i < dict.size(); i++) {
            if(can_spell(str, dict[i])) {
                count++;
            }
        }
        cout << count << endl;
    }
    
    
    return 0;
}