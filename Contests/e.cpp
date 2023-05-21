#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    map <string, int> palavras;

    while(n--){
        string plv;
        
        cin >> plv;

        if(palavras[plv]){
            cout << plv << palavras[plv] <<  endl;
            palavras[plv]++;
        } else{
            palavras[plv] = 1;
            cout << "OK" << endl;
        }
    }
    
    return 0;
}