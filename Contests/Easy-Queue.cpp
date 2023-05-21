#include <bits/stdc++.h>

#define optimize ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main() {

    optimize;

    int n;
    int valor;

    queue <int> fila;

    int operacao;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &operacao);

        if(operacao == 1){
            scanf("%d", &valor);
            fila.push(valor);
        } else if(operacao == 2){
            if(!fila.empty())
                fila.pop();
        } else if(operacao == 3){
            if(fila.empty()){
                printf("Empty!\n");
            } else{
                printf("%d\n", fila.front());
            }
        }
    }


    
    return 0;
}