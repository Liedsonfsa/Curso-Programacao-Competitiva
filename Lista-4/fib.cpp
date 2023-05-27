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
#define MAXN 101010
#define MAXL 23
#define endl '\n'

int n;

ll dp[MAXN];

ll fib(int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    if(dp[n] != 0){
        return dp[n];
    }

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {

    optimize;

    memset(dp, 0, sizeof(dp));

    cin >> n;

    int num;
    ll r;

    for(int i = 0; i < n; i++){

        cin >> num;

        r = fib(num);

        cout << "Fib(" << num << ") = " << r << endl;
    }


    return 0;
}