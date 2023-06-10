#include <bits/stdc++.h>

using namespace std;

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define DIV(a, b) ((a) / (b))
#define MULT(a, b) ((a) * (b))
#define SOMA(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define endl '\n'
#define pb push_back
#define ll long long

struct atividades{
    ll a, b, c;
};

int main() {

    ll n;

    cin >> n;

    vector <atividades> v(n + 1);

    for(ll i = 1; i <= n; i++){
        cin >> v[i].a;
        cin >> v[i].b;
        cin >> v[i].c;
    }

    ll dp[n + 1][3];
    
    dp[1][0] = v[1].a;
    dp[1][1] = v[1].b;
    dp[1][2] = v[1].c;

   
    for(ll i = 2; i <= n; i++){
        dp[i][0] = v[i].a + MAX(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = v[i].b + MAX(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = v[i].c + MAX(dp[i - 1][0], dp[i - 1][1]);
    }

    cout<< MAX(dp[n][0], MAX(dp[n][1], dp[n][2])) <<endl;


    return 0;
}
