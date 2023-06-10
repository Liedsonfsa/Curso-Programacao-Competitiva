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

int main() {

    int n, k;

    cin >> n >> k;

    vector <int> h(n + 1, 0);

    for(int i = 1; i <= n; i++){
        cin >> h[i];
    }

    const int oo = 1e9;

    vector <int> minimo(n + 1, oo);

    minimo[1] = 0;

    for(int i = 2; i <= n; i++){
        for(int j = i - 1; j >= MAX(1, i - k); j--){
            minimo[i] = MIN(minimo[i], minimo[j] + abs(h[i] - h[j]));
        }
       
    }


    cout << minimo[n] << endl;

    return 0;
}