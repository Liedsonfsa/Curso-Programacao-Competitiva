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

    int n;

    cin >> n;

    vector <int> h(n + 1);

    h[0] = 0;

    for(int i = 1; i <= n; i++){
        cin >> h[i];
    }

    vector <int> minimo(n + 1);

    minimo[2] = abs(h[2] - h[1]);

    for(int i = 3; i <= n; i++){
        minimo[i] = MIN(minimo[i - 1] + abs(h[i] - h[i - 1]), minimo[i - 2] + abs(h[i] - h[i - 2]));
    }


    cout << minimo[n] << endl;

    return 0;
}