#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int n;

    while(cin >> n){
        int maior, ultimo, primeiro;
        int q = 0, s = 0, i = 0, pq = 0;
        vector <int> push, pop;
        stack <int> pilha;
        int l = 0;
        while( n-- ){
            int op, valor;

            cin >> op >> valor;

            if(l == 0 && op == 1){
                maior = valor;
                primeiro = valor;
            }

            if(op == 1){
                ultimo = valor;
            }

            if(valor > maior && op == 1){
                maior = valor;
            }

            if(op == 1){
                push.push_back(valor);
            } else{
                pop.push_back(valor);
            } 
        }


        if(push[0] == pop[0]){
            cout << "queue" << endl;
        } else if(pop[0] == maior && (pop[0] == push[push.size() - 1])){
            cout << "not sure" << endl;
        } else if(pop[0] == push[push.size() - 1]){
            cout << "stack" << endl;
        } else if(pop[0] == maior){
            cout << "priority queue" << endl;
        } else{
            cout << "impossible" << endl;
        }

        
    }

    
    
    return 0;
}