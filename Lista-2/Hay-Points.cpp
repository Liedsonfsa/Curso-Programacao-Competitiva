#include <bits/stdc++.h>

using namespace std;

int main() {

    map <string, int> m;

    int qtd_palavras, qtd_desc;

    while(cin >> qtd_palavras >> qtd_desc){

        while( qtd_palavras-- ){
            string cargo;
            int salario;

            cin >> cargo >> salario;

            m[cargo] = salario;
        }

        while( qtd_desc-- ){
            int s = 0;
            string desc;

            while(cin >> desc){
                if(desc == "."){
                    break;
                }

                s += m[desc];
            }

            cout << s << endl;
            
        }
        m.clear();
    }
    
    return 0;
}