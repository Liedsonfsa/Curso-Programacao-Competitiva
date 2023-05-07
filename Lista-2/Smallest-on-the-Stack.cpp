#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    stack <int> pilha;
    priority_queue<int, vector<int>, greater<int> > pq;
    //int emp = 0;

    while( n-- ){
        string operacao;
        int valor;

        cin >> operacao;

        if(operacao[1] == 'U'){
            cin >> valor;

            pilha.push(valor);
            pq.push(valor);
            //emp++;
        }

        if(operacao[0] == 'M'){
            cout << pq.top() << endl;
        }

        if(operacao[1] == 'O'){
            if(pilha.top() == pq.top()){
                pq.pop();
            }
            pilha.pop();
        }

        
    }

    return 0;
}
