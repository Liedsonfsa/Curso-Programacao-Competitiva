#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, i, menor, pos = 0;
    
    cin >> n;
    
    int v[n];
    
    for(i = 0; i < n; i++){
        cin >> v[i];
        if(i == 0){
            menor = v[i];
            pos = i;
        }
        
        if(v[i] < menor){
            menor = v[i];
            pos = i;
        }
    }
    
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
 
    return 0;
}