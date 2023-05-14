#include <bits/stdc++.h>

#define ll long long
 
using namespace std;
 
int main() {

    ll n, q;

    cin >> n >> q;

    ll arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    while(q--){
        int a, b;

        cin >> a >> b;

        ll min;

        if(arr[a] > arr[b]){
            min = arr[a] - arr[b];
        } else{
            min = (arr[b] - arr[a]) + 1;
        }



        cout << min << endl;
    }

    return 0;
}