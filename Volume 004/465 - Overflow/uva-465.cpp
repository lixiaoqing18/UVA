#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    string a;
    char op;
    string b;
    string line;
    while (cin >> a >> op >> b)
    {
        cout << a << ' ' << op << ' ' << b << endl;
        double la = stod(a);
        if (la > numeric_limits<int>::max())
        {
            cout << "first number too big" << endl;
        }

        double lb = stod(b);
        if (lb > numeric_limits<int>::max())
        {
            cout << "second number too big" << endl;
        }

        switch (op)
        {
        case '+':
            if (la + lb > numeric_limits<int>::max())
            {
                cout << "result too big" << endl;
            }   
            break;
        case '*':
            if (la * lb > numeric_limits<int>::max())
            {
                cout << "result too big" << endl;
            }   
            break;
        }
    }
    //fclose(stdin);
    return 0;
}