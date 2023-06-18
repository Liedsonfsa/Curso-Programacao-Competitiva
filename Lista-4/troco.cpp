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
int dp[MAXN][100];

int troco(int N, int moeda)
{
    if (N == 0)
        return 0;
 
    if (N < 0 || moeda == moedas.size())
        return INF;
 
    if (dp[N][moeda] != -1)
        return dp[N][moeda];
 
    int pega = 1 + troco(N - moedas[moeda], moeda);
    int nao_pega = troco(N, moeda + 1);
 
    return dp[N][moeda] = min(pega, nao_pega);
}

int main() {

    optimize;

    memset(dp, -1, sizeof dp);

    int q;

    cin >> q >> n;

    moedas.resize(q);

    for(int i = 0; i < q; i++){
        cin >> moedas[i];
    }

    //cin >> n;

    if(troco(n, 0) > 0){
        cout << "S" << endl;
    } else{
        cout << "N" << endl;
    }

    // https://medium.com/linkapi-solutions/o-que-%C3%A9-big-o-notation-32f171e4a045

    return 0;
}