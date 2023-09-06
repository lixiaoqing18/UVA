#include <bits/stdc++.h>
using namespace std;
/*
判断每行各个单词首字母是否一样
*/
int main()
{
    string line, word;
    char firstAlpha;
    istringstream iss;
    while(getline(cin, line), line != "*") 
    {
        iss.clear();
        iss.str(line);
        iss >> word;
        firstAlpha = toupper(word[0]);
        char same = 'Y';
        while (iss >> word)
        {
            if(toupper(word[0]) != firstAlpha) {
                same = 'N';
            }
        }
        cout << same << endl;
    }
    return 0;
}