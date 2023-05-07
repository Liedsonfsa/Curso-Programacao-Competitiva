#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 

    int n;

    cin >> n;

    stack <int> pilha;
    multiset <int> num;
   
    while( n-- ){
        string operacao;
        int valor;

        cin >> operacao;

        if(operacao[1] == 'U'){
            cin >> valor;

            pilha.push(valor);
            num.insert(valor);
        }

        if(operacao[0] == 'M'){
            if(pilha.empty()){
                cout << "empty" << endl;
            } else{
                cout << *num.begin() << endl;
            }
        }

        if(operacao[1] == 'O'){
            if(pilha.empty()){
                cout << "empty" << endl;
            } else{
                num.erase(pilha.top());
                pilha.pop();
            }
            
        }

        
    }

    return 0;
}
