#include <bits/stdc++.h>

using namespace std;

#define optimize                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
#define INF 100000010
#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define REP(i, a, b) for (int i = (a); i <= (b); i++)
#define POS(n, x) (lower_bound(ALL(n), x) - (n).begin())
#define ll long long
#define ld long double
#define pii pair<int, int>
#define vi vector<ll>
#define vii vector<pii>
#define os_type int
#define PB push_back
#define EB emplace_back
#define MOD 1000000007
#define PRIME 101
#define MAXN 1010
#define MAXL 23
#define endl '\n'

int n, m;
vi moedas;
int dp[MAXN];

int main() {

    optimize;

    cin >> n >> m;

    moedas.resize(n);

    //for(int &x : moedas) cin >> x;





    return 0;
}