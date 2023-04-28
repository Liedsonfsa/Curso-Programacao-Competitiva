#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    vector<int> array;

    for(int i = 0; i < 10; i++){
        int num;

        cin >> num;

        if(num <= 0){
            num = 1;
        }

        array.push_back(num);
        
    }

    for(int i = 0; i < 10; i++){
        cout << "X[" << i << "] = " << array[i] << endl;
    }
 
    return 0;
}


// flags; doc https://cplusplus.com/reference/vector/vector/

/*

    .push_back(valor) : Adiciona um valor no final do vetor
    .pop_back() : Remove o último valor do vetor
    .back() : Retorna o último valor do vetor
    .size() : Retorna o tamanho do vetor
    .clear() : Limpa o vetor
    .empty() : Retorna true se o vetor estiver vazio
    .begin() : Retorna um iterador para o primeiro elemento do vetor
    .end() : Retorna um iterador para o último elemento do vetor

*/
