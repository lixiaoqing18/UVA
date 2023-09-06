#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int t1, t2, f, a, c1, c2, c3;
    for (int i = 1; i <= t; i++)
    {
        cin >> t1 >> t2 >> f >> a >> c1 >> c2 >> c3;
        int score = t1 + t2 + f + a + (c1 + c2 + c3 - min(c1, min(c2,c3))) / 2;
        char grade;
        if (score >= 90) grade = 'A';
        else if (score >= 80) grade = 'B';
        else if (score >= 70) grade = 'C';
        else if (score >= 60) grade = 'D';
        else grade = 'F';

        cout << "Case " << i << ": " << grade << endl;
    }
    return 0;
}