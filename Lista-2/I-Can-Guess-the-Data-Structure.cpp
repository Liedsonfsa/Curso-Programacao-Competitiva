#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int n;

    while(cin >> n){
        stack <int> pilha;
        queue <int> fila;
        priority_queue <int> pq;

        bool queue, stack, priority_q;

        queue = true;
        stack = true;
        priority_q = true;

        while( n-- ){
            int op, valor;

            cin >> op >> valor;

            if(op == 1){
                pilha.push(valor);
                fila.push(valor);
                pq.push(valor);
            }

            if(op == 2){
                if(fila.front() == valor){
                    fila.pop();
                } else{
                    queue = false;
                }

                if(pilha.top() == valor){
                    pilha.pop();
                } else{
                    stack = false;
                }

                if(pq.top() == valor){
                    pq.pop();
                } else{
                    priority_q = false;
                }
 
            }
        }

        if (stack && !queue && !priority_q) {
            cout << "stack" << endl;
        } else if (!stack && queue && !priority_q) {
            cout << "queue" << endl;
        } else if (!stack && !queue && priority_q) {
            cout << "priority queue" << endl;
        } else if (stack || queue || priority_q) {
            cout << "not sure" << endl;
        } else if (!stack && !queue && !priority_q) {
            cout << "impossible" << endl;
        }

    }

    
    return 0;
}