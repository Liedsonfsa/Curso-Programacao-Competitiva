#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main()
{
    int N, Q;
 
    cin >> N >> Q;
 
    vector<pair<int, int>> cartas(N + 1);
 
    for (int i = 1; i <= N; i++)
    {
        cin >> cartas[i].first;
    }
 
    for (int i = 1; i <= N; i++)
    {
        cin >> cartas[i].second;
    }
 
    vector<int> qtd(N + 2, 0);
 
    for (int i = 0; i < Q; i++)
    {
        int l, r;
 
        cin >> l >> r;

 
        qtd[l] += 1;
        qtd[r + 1] -= 1;
 
       
    }
 
    vector<int> prefix_sum(N + 2, 0);
 
    for (int i = 1; i <= N; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + qtd[i];
    }
 
 
    for (int i = 1; i <= N; i++)
    {
        if (prefix_sum[i] % 2 == 0)
        {
            cout << cartas[i].first << " ";
        }
        else
        {
            cout << cartas[i].second << " ";
        }
    }
 
    return 0;
}