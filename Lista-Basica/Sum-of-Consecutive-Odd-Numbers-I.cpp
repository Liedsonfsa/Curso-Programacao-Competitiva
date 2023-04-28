#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int x, y, maior, menor, i, soma = 0;
    cin >> x >> y;
    
    if(x > y){
        maior = x;
        menor = y;
    } else{
        maior = y;
        menor = x;
    }
    
    for(i = menor + 1; i < maior; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    
    cout << soma << endl;
    
    
 
    return 0;
}