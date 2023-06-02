#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
#define MAXN 10101
#define MAXL 23
#define MAX_MOEDAS 100
#define endl '\n'
 
using namespace std;
using namespace __gnu_pbds;
 
#define ordered_set tree<os_type, null_type, less<os_type>, rb_tree_tag, tree_order_statistics_node_update>
 
int N;
vi moedas;
 
int dp[MAXN][MAX_MOEDAS];
 
// O(2 ^ N)
// O(quantidade de estados * custo para calcular cada estado)
// O(N * qtd_moedas)
// O(N * qtd_moedas)
 
 
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
 
void solve(int N, int moeda)
{
    if (N == 0)
        return;
 
    if (N < 0 || moeda == moedas.size())
        return;
 
    int pega = 1 + troco(N - moedas[moeda], moeda);
    int nao_pega = troco(N, moeda + 1);
 
    if (pega <= nao_pega)
    {
        cout << moedas[moeda] << " ";
        solve(N - moedas[moeda], moeda);
    }
    else
        solve(N, moeda + 1);
    
}
 
int main(int argc, char **argv)
{
    optimize;
 
    memset(dp, -1, sizeof dp);
 
    int qtd;
 
    cin >> qtd;
 
    moedas.resize(qtd);
 
    for (int i = 0; i < qtd; i++)
        cin >> moedas[i];
 
    cin >> N;
 
    cout << "Quantidade minima de moedas: " << troco(N, 0) << endl;
    cout << "Moedas usadas: ";
    solve(N, 0);
 
    return 0;
}
 
/*
 
Problema do Troco
 
Descrição: 
    Dado um conjunto de moedas e um valor N, qual a menor quantidade de moedas necessárias para formar o valor N?
 
moedas = {1, 3, 4}
N = 6
 
Caso use a moeda 1: 1 + troco(5)
Caso use a moeda 3: 1 + troco(3)
Caso use a moeda 4: 1 + troco(2)
 
 
 
 
1 + 1 + 4 = 6 => 3 Moedas
3 + 3 = 6 => 2 Moedas
1 + 1 + 1 + 3 = 6 => 4 Moedas
1 + 1 + 1 + 1 + 1 + 1 = 6 => 6 Moedas
 
Resposta: 2 Moedas
 
 
numero de moedas = 3
moedas = {1, 2, 3} 
Troco = 10
 
*/

/*
Dp(45 problems):

https://lnkd.in/dMhA4Wv9

Greedy(34 problems):

https://lnkd.in/dgGmtxG4

Graphs(32 problems):

https://lnkd.in/dvsNYauE

Backtracking(17 problems):

https://lnkd.in/d8AirH2g

Linkedlist(13 problems):

https://lnkd.in/dNbyh4-u

Bitmanipulation list(21 problems):

https://lnkd.in/dPv78azk

Hash table and map(46 problems):

https://lnkd.in/dvUa4fPD

Dsu or union find list(25 problems):

https://lnkd.in/dWS5T2vj

Bridges and Articulation points(4 problems):

https://lnkd.in/di366ZWT

Djikstra Algorithm(13 problems):

https://lnkd.in/dgCGbwEb

Bellman Ford Algorithm(5 problems):

https://lnkd.in/d3UyUBAF

Floyd Warshall Algorithm(6 problems):

https://lnkd.in/dNFZcePK

Topological sort(4 problems):
https://lnkd.in/dmkGduTi

Trie(8 problems):
https://lnkd.in/dat6NAjq


Trees(Top 26):

https://lnkd.in/dwbQhqxw

Trees(Top 74):

https://lnkd.in/dxTnSHtC

Binary search(25 problems):

https://lnkd.in/dpE3_ajH

2pointers(30 problems):

https://lnkd.in/dv4HdAr8

List of questions sorted by common patterns:

https://lnkd.in/dTWp-xwE.


Interview Preparation guide:

https://lnkd.in/d8Qv9Z35

https://lnkd.in/dStAABSY


Dynamic Programming:

https://lnkd.in/dq347f-n

https://lnkd.in/d3y8rung.


https://lnkd.in/di-VY-UP


Graphs:

https://lnkd.in/dKDfk2x8

https://lnkd.in/dNr_xCQv

https://lnkd.in/dume-RRW

Amazon leadership principles:
https://lnkd.in/dnigKEXg
*/

// https://maratona.sbc.org.br/fasezero22.html#org10b9618