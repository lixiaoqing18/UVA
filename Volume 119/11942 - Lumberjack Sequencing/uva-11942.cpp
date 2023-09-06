#include <bits/stdc++.h>
using namespace std;

int get_direction(int v)
{
    if(v > 0) return 1;
    else if (v < 0) return -1;
    else return 0;
}

int main()
{
    int n;
    cin >> n;
    cout << "Lumberjacks:" << endl;
    while (n--)
    {
        int pre,next;
        cin >> pre >> next;
        int pre_diretion = get_direction(next - pre);
        int i;
        for(i = 2; i < 10; i++)
        {
            pre = next;
            cin >> next;
            int next_direction = get_direction(next - pre);
           // cout << i << " " << next << "-" << pre << "=" << next_direction << endl;
            if(pre_diretion == 0 && next_direction != 0)
            {
                pre_diretion = next_direction;
                continue;
            }
            if(pre_diretion * next_direction == -1){
                cout << "Unordered" << endl;
                for(int j = i + 1; j < 10; j++)
                {
                    cin >> next;
                }
                break;
            }
        }
        if(i == 10)
        {
            cout << "Ordered" << endl;
        }
    }
    return 0;
}