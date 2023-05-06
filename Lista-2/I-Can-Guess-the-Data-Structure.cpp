#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int n;

    while(cin >> n){
        int maior, ultimo, primeiro, pd;
        int q = 0, s = 0, i = 0;
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

            pilha.push(valor);
            fila.push(valor);
            pq.push(valor);

            if(op == 2 && pq.top() == maior && pop == true){
                pq.pop();
                priority = true;
                pop = false;
            }

            l++;
            
        }


        if(priority){
            cout << "priority queue" << endl;
        } else if(pilha.top() == fila.front()){
            cout << "not sure" << endl;
        } else if(pilha.top() == fila.back()){
            cout << "queue" << endl;
        } 

        


       
        
    }

    
    
    return 0;
}