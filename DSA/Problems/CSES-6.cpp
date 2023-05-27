// https://cses.fi/problemset/task/1071

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    long long x, y;
    cin >> x >> y;

    long long z = max(x, y);
    long long a = (z * z) - (z - 1)+0LL;

    if (x == y) cout << a<<endl;

    else if (z % 2 != 0)
    {
        if (x < y) cout << a + (z - x)<<endl;

        else cout << a - ( z - y)<<endl;

    }
    else
    {
        if (x < y) cout << a - ( z - x)<<endl;

        else cout << a + (z - y)<<endl;
    }

    }
    return 0;
}
