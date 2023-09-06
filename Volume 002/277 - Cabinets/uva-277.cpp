#include <bits/stdc++.h>
using namespace std;
/*
文本格式转换，
输入：
Field       Length  Explanation
Style Code  1-3     Code specifying the cabinet’s style.
Style Name  0-15    Name for cabinet style.
Description 1-15    Code describing type of cabinet.
Extension   0-25    Additional information about cabinet.
Unit Price  0-6     Manufacturer’s suggested retail price (dollars ×100)
输出：
Item Id,Item Desc,Item Price
Field       Length      Explanation
Item Id     4-13        Unique identification code for inventory database.
Item Desc   1-30        Inventory description of cabinet.
Item Price  4-7         Manufacturer’s suggested retail price

Item Id：Style Code+Description，Style Code如果不足3位左边补0，整个字符长度不超过13
Item Desc：Style Name-Extension，如果Style Name为空，则取同Style Code的第一个Style Name，如果仍为空，则
抛弃该行记录，如果第一个style Name也为空，同样要抛弃该行，整体如果超过30个字符会被从右边截断
Item Price：Unit Price除以100后，保留两位小数，如果Unit Price不存在，则为0.00

多组记录中间有空行，输入输出一样
*/
int main()
{
    istringstream iss;
    string word;
    int n;
    cin >> n;
    cin.ignore(1024, '\n');
    cin.ignore(1024, '\n');
    for (int i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            cout << endl;
        }

        cout << "Item Id,Item Desc,Item Price" << endl;
        string line;
        string firstStyleCode = "", firstStyleName = "";
        while (getline(cin, line))
        {
            iss.clear();
            iss.str(line);
            if (line.length() == 0)
            {
                break;
            }
            // cout << line.length() << ":" << line << endl;

            string styleCode;
            string styleName;
            string description;
            string extension;
            string unitprice = "0";
            getline(iss, styleCode, ',');
            getline(iss, styleName, ',');
            getline(iss, description, ',');
            getline(iss, extension, ',');
            getline(iss, unitprice, ',');

            if (firstStyleCode != styleCode)
            {
                firstStyleCode = styleCode;
                firstStyleName = styleName;
            }

            if (styleName.empty())
            {
                styleName = firstStyleName;
                if (styleName.empty())
                {
                    continue;
                }
            }

            if (3 + description.length() > 13)
            {
                continue;
            }
            int code = stoi(styleCode);
            cout << setfill('0') << setw(3) << code << description;
            cout << ",";
            string itemDesc = styleName;
            if (!extension.empty())
            {
                itemDesc += "-" + extension;
            }
            if (itemDesc.length() > 30)
            {
                itemDesc = itemDesc.substr(0, 30);
            }
            cout << itemDesc;
            cout << ",";
            double price = stod(unitprice) / 100;
            cout << fixed << setprecision(2) << price;
            cout << endl;
        }
    }
    return 0;
}