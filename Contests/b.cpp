#include <bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

int main() {

    int n;

    cin >> n;

    vector <int> num;

    for(int i = 0; i < n; i++){
        int valor;

        cin >> valor;

        num.push_back(valor);
    }

    int m;

    cin >> m;

    while(m--){
        int c, f;

        cin >> c >> f;

        int sum = 0;

        for(int i = c; i <= f; i++){
            sum += num[i];
        }

        cout << sum << endl;
    }

    
    
    return 0;
}

// 