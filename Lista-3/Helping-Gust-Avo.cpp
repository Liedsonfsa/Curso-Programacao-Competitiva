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
#define MAXN 101010
#define MAXL 23
#define EPS 0.0000001
#define endl '\n'
 
using namespace std;
using namespace __gnu_pbds;
 
#define ordered_set tree<os_type, null_type,less<os_type>, rb_tree_tag,tree_order_statistics_node_update>
 
string A, B;
 
bool check_substring(string &aux)
{
    int i = 0, j = 0;
 
    while (i < A.size() && j < aux.size())
    {
        if (A[i] == aux[j])
            j++;
        i++;
    }
 
    return j == aux.size();
}
 
bool check(int tam)
{
    string aux = "";
 
    for (auto x : B)
        for (int i = 0; i < tam; i++)
            aux += x;
 
    return check_substring(aux);
}
 
int main(int argc, char** argv)
{
    optimize;
 
    int T;
 
    cin >> T;
 
    while(T--)
    {
        cin >> A >> B;
 
        int l = 0, r = A.size() / B.size(), mid, ans = 0;
 
        while (l <= r)
        {
            mid = (l + r) / 2;
 
            if (check(mid) == true)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}