// https://cses.fi/problemset/task/1069

#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    char pre = s[0];
    int c = 1, ans = 0;
    for (int i = 1; i < s.length(); i++)
    {

        if (s[i] == pre)
            c++;
        else {
            ans = max(ans, c);
            c = 1;
        }
        pre = s[i];
    }
    ans = max(ans, c);

    cout << ans;
    return 0;

}
