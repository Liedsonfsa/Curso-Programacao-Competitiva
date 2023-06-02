#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF 100000010
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define POS(n, x) (lower_bound(ALL(n), x) - (n).begin())
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define os_type int
#define PB push_back
#define EB emplace_back
#define MOD 1000000007
#define PRIME 101 
#define MAXN 1000010
#define MAXL 23
#define endl '\n'
 
using namespace std;
using namespace __gnu_pbds;
 
#define ordered_set tree<os_type, null_type,less<os_type>, rb_tree_tag,tree_order_statistics_node_update>
 
int T, N, M;
int dp[MAXN];
 
vi moedas;
 
int solve(int N)
{
    dp[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        dp[i] = INF;
 
        for (int j = 0; j < M; j++)
            if (moedas[j] <= i)
                dp[i] = min(dp[i], dp[i - moedas[j]] + 1);    
    }
 
    return dp[N];
}
 
int main(int argc, char** argv)
{
    optimize;
 
    cin >> T;
 
    while (T--)
    {
        cin >> M >> N;
 
        moedas.resize(M);
 
        for (auto &x : moedas) cin >> x;
 
        cout << solve(N) << endl;
    }
 
    return 0;
}