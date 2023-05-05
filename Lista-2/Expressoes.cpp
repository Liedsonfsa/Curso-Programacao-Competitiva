#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    while( n-- ){
        stack <char> pilha;

        string expressao;

        cin >> expressao;

        if(expressao.size() == 1){
            cout << "N" << endl;
        } else{

            pilha.push(expressao[0]);
            int abrindo = 0;

            bool valid = true;

            if(expressao[0] == '(' || expressao[0] == '[' || expressao[0] == '{'){
                abrindo++;
            }
    
            for(int i = 1; i < expressao.size(); i++){
                
                if(expressao[i] == '(' || expressao[i] == '[' || expressao[i] == '{'){
                    abrindo++;
                }

                if(abrindo > 0){
                    if(expressao[i] == ')' && pilha.top() == '('){
                        pilha.pop();
                        abrindo--;
                    } else if(expressao[i] == ']' && pilha.top() == '['){
                        pilha.pop();
                        abrindo--;
                    } else if(expressao[i] == '}' && pilha.top() == '{'){
                        pilha.pop();
                        abrindo--;
                    } else{
                        pilha.push(expressao[i]);
                    }

                } else{
                    valid = false;
                    break;
                }
                
            }

            if(pilha.size() == 0 && valid){
                cout << "S" << endl;
            } else{
                cout << "N" << endl;
            }
        
        }
    }
    
    return 0;
}