#include <bits/stdc++.h>
using namespace std;
/*
格式转换，
输入格式：
Department个数
Department
Title, First Name, Last Name, Street Address, Home
Phone, Work Phone, and Campus Mailbox

输出格式：（按last name排序）
----------------------------------------
< T itle > < F irstN ame > < LastN ame >
< HomeAddress >
Department: < Department >
Home Phone: < HomeP hone >
Work Phone: < W orkP hone >
Campus Box: < CampusBox >
*/

struct record
{
    string title;
    string first_name;
    string last_mame;
    string address;
    string home_phone;
    string work_phone;
    string campus_mailbox;
    string department;
};

bool cmp(record r1, record r2)
{
    return r1.last_mame < r2.last_mame;
}

void print(record r)
{
    cout << "----------------------------------------" << endl;
    cout << r.title << " " << r.first_name << " " << r.last_mame << endl;
    cout << r.address << endl;
    cout << "Department: " << r.department << endl;
    cout << "Home Phone: " << r.home_phone << endl;
    cout << "Work Phone: " << r.work_phone << endl;
    cout << "Campus Box: " << r.campus_mailbox << endl;
}

vector<record> records;

void add_record(string department, string line, vector<record> &v)
{
    record r;
    r.department = department;
    istringstream iss(line);
    string word;
    getline(iss, r.title, ',');
    getline(iss, r.first_name, ',');
    getline(iss, r.last_mame, ',');
    getline(iss, r.address, ',');
    getline(iss, r.home_phone, ',');
    getline(iss, r.work_phone, ',');
    getline(iss, r.campus_mailbox, ',');

    v.push_back(r);
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(1024, '\n');
    string department;
    string line;
    while (n--)
    {
        getline(cin, department);
        while (getline(cin, line))
        {
            if (line.length() == 0)
            {
                break;
            }
            add_record(department, line, records);
        }
    }

    sort(records.begin(), records.end(), cmp);
    for (int i = 0; i < records.size(); i++)
    {
        print(records[i]);
    }

    return 0;
}