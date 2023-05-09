#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main() {

    optimize;
    int n, m;
    int op = 0;

    set <int> aprox;

    cin >> n >> m;

    while(true){
        if(n < m){
            n /= 2;
            op++;
            //cout << "0" << endl;
            //cout << "valor de n: " << n << endl;
        }
        aprox.insert(n * 2);
        aprox.insert(n * 3);
        aprox.insert(n / 2);
        aprox.insert(n / 3);
        aprox.insert(n + 7);
        aprox.insert(n - 7);

        n = *aprox.lower_bound(m);
        op++;
        //cout << "valor de n no else: " << n << endl;

        if(n == m) break;

        aprox.clear();

    }

    printf("%d\n", op);
    
    return 0;
}