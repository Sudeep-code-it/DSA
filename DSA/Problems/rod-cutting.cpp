// https://practice.geeksforgeeks.org/problems/rod-cutting0840/1

class Solution{
  public:
  int dp[1001][1001];
int findmax(int price[], int cur, int n, int rem)
{
    if (cur > n || rem <= 0 || cur > rem) return 0;

    if (dp[cur][rem] != -1) return dp[cur][rem];

    int a = price[cur -1] + findmax(price, cur, n, rem - cur);
    int b = findmax(price, cur + 1, n, rem);

    return dp[cur][rem] = max(a, b);

}
    int cutRod(int price[], int n) {
        memset(dp, -1, sizeof(dp));
        return findmax(price, 1, n, n);
    }
};
