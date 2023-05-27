// https://cses.fi/problemset/task/1094

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>v(n);
    int pre;
long long c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            pre = v[0];
        else
        {
            if (v[i] < pre)
                c += (pre - v[i]+0LL);

            else
                pre = v[i];

        }

    }

    cout << c;
    return 0;

}
