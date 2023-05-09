#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    scanf("%d", &n);

    stack <int> pilha;
   
    multiset <int> ms;
  
    // https://cp-algorithms.com/data_structures/stack_queue_modification.html
  
    while( n-- ){
        char operacao[4];
        int valor;

        scanf("%s", operacao);

        if(operacao[1] == 'U'){
            scanf("%d", &valor);

            pilha.push(valor);
            ms.insert(valor);
        }

        if(operacao[0] == 'M'){
            if(pilha.empty()){
               printf("EMPTY\n");
            } else{
               cout << *ms.begin() << endl;
            }
            
        }

        if(operacao[1] == 'O'){
            if(pilha.empty()){
                printf("EMPTY\n");
            } else{
                ms.erase(ms.find(pilha.top()));
                pilha.pop();
            }
        }
    }


    return 0;
}
