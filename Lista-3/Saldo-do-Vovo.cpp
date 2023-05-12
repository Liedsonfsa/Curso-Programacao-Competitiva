#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int menor_saldo;
    
    int dias, saldo_inicial;
    
    cin >> dias >>  saldo_inicial;
    
    menor_saldo = saldo_inicial;

    
    
    while(dias--){
        int movimentacao;
        cin >> movimentacao;
        
        if(movimentacao < 0){
            int novo_saldo = saldo_inicial + movimentacao;
            if(novo_saldo < menor_saldo){
                menor_saldo = novo_saldo;
            }
            saldo_inicial = novo_saldo;
        } else{
            saldo_inicial += movimentacao;
        }
    }
    
    cout << menor_saldo << endl;
   
 
    return 0;
}