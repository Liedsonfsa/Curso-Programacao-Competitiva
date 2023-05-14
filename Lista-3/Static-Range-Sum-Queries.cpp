#include <bits/stdc++.h>

#define ll long long
 
using namespace std;
 
int main() {

    int n, q;

    cin >> n >> q;

    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    vector <ll> prefix_sum(n + 1);

    prefix_sum[0] = 0;

    for(int i = 1; i <= n; i++){
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    while(q--){
        int a, b;

        cin >> a >> b;

        ll soma = prefix_sum[b] - prefix_sum[a - 1];

        cout << soma << endl;
    }

    return 0;
}