#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int n;

    cin >> n;

    int i, x;

    for(i = 1; i <= n; i++){
        cin >> x;

        int j, prime = 0;
        for(j = x - 1; j > 1; j--){
            if(x % j == 0){
                prime = 1;
                break;
            }
        }

        if(prime == 1){
            cout << x << " nao eh primo" << endl;
        } else{
            cout << x << " eh primo" << endl;
        }


    }

    return 0;
}

// getline(cin, nome);