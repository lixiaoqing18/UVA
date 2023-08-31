#include <bits/stdc++.h>
using namespace std;

double A[10][31]; //小数部分
int B[10][31]; //指数部分

void buildTable()
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 1; j <= 30; j++)
        {
            double m = 1 - pow(2, -1 - i);
            double e = pow(2, j) - 1;
            double t = log10(m) + e * log10(2);
            B[i][j] = floor(t);
            A[i][j] = pow(10, t - B[i][j]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("in.txt", "r", stdin);

    buildTable();
    string line;
    while (getline(cin, line))
    {
        if (line == "0e0")
            break;
        // cout << line << endl;
        double a = stod(line.substr(0, line.find("e")));
        int b = stoi(line.substr(line.find("e") + 1));
       
        for (int i = 0; i <= 9; i++)
        {
            for(int j = 1; j <= 30; j++) 
            {
                if(b == B[i][j] && fabs(a - A[i][j]) < 1e-4)
                {
                    cout << i << " " << j << endl;
                }
            }
        }
        
    }

    fclose(stdin);
    return 0;
}
