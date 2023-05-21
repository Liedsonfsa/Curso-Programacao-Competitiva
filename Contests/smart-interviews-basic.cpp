#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    int l = 1;

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= 1; j--){
            if(j == l){
                cout << "*";
                l++;
            } else{
                cout << j;
            }
        } cout << endl;
    }


    return 0;
}