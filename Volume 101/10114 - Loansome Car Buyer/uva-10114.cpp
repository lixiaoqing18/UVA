/*
问题简述：
    贷款买车，遇到车祸，保险理赔10000元，欠银行15000，要求立即归还，既损失了车，
又损失了5000元。
    贷款月份<=100，汽车价值<=75000
    输入：月份、首付、贷款金额、折旧记录数
    折旧记录数按序号、折旧比例列出，如果空出的序号取前一次的折旧比例，第0次代表一购买汽车就折旧的比例
    输出：第一次贷款小于汽车价值的月份
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int months;//贷款月份
    double downPay;//首付
    double loan;//贷款金额
    int depCount;//折旧记录数
    while (cin >> months >> downPay >> loan >> depCount)
    {
        if(months < 0)
            break;
        vector<double> deps(months + 1, 0);
        for(int i = 0; i < depCount; i++)
        {
            int idx;
            double deprecation;
            cin >> idx >> deprecation;
            deps[idx] = deprecation;
        }
        double theLoan = loan;
        double loanPerMonth = loan / months;
        double theValue = loan + downPay;
        for(int i = 0; i <= months; i++)
        {
            if(i > 0)
                theLoan -= loanPerMonth;
            if(deps[i] == 0)
                deps[i] = deps[i - 1];
            theValue = theValue * (1 - deps[i]);
            if(theLoan < theValue)
            {
                cout << i << (i == 1 ? " month" : " months") << endl;
                break;
            }
        }
    }
    
    fclose(stdin);
    return 0;
}