#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int n;

    while(cin >> n){
        stack <int> pilha;
        queue <int> fila;
        priority_queue <int> pq;

        int p = 0, q = 0, prq = 0, nt = 0, i = 0;
        int l = 0;

        while( n-- ){
            int op, valor;

            cin >> op >> valor;

            if(op == 1){
                pilha.push(valor);
                fila.push(valor);
                pq.push(valor);
            }

            if(op == 2 && l == 0){
                if(fila.front() == valor && valor != pq.top() && valor != pilha.top()){
                    q = 1;
                } else if(pq.top() == pilha.top()){
                    nt = 1;
                } else if(valor == pilha.top() && valor != fila.front() && valor != pq.top()){
                    p = 1;
                } else if(valor == pq.top()){
                    prq = 1;
                } else if(valor != pilha.top() && valor != fila.front() && valor != pq.top()){
                    i = 1;
                }

                l++;


            }
 
        }


        if((p + q + prq) == 1 && nt == 0){
            if(p == 1){
                cout << "stack" << endl;
            } else if(q == 1){
                cout << "queue" << endl;
            } else if(prq == 1){
                cout << "priority queue" << endl;
            }
        } else if((p + q + prq) >= 1){
            cout << "not sure" << endl;
        }else if(i == 1){
            cout << "impossible" << endl;
        } 

        
    }

    
    
    return 0;
}