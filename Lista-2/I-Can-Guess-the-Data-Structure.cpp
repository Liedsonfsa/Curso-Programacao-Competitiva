#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int n;

    while(cin >> n){
        int maior, ultimo, primeiro, pd;
        bool q = false, s = false, i = false;
        bool priority = false, pop = true;
        //vector <int> push, pop;
        stack <int> pilha;
        queue <int> fila;
        priority_queue <int> pq;
        int l = 0;

        while( n-- ){
            int op, valor;

            cin >> op >> valor;

            if(l == 0) maior = valor;

            if(valor > maior) maior = valor;

            if(op == 1){
                pilha.push(valor);
                fila.push(valor);
                pq.push(valor);
            }

            if(op == 2){
                if(valor == fila.front()){
                    
                }
            }

           


            l++;
            
        }

        
    }

    
    
    return 0;
}