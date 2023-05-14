#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int n;

    cin >> n;

    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    

    int q;

    cin >> q;

    vector <int> prefix_sum(n + 1);

    prefix_sum[0] = 0;

    for(int i = 1; i <= n; i++){
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }
    
    while(q--){
        int l, r;

        cin >> l, r;

        int soma = prefix_sum[r] - prefix_sum[l - 1];
    }
    

    return 0;
}