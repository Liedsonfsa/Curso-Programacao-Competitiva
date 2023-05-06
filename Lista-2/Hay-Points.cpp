#include <bits/stdc++.h>

using namespace std;

int main() {

    map <string, double> m;

    int qtd_palavras, qtd_desc;

    cin >> qtd_palavras >> qtd_desc;

    while( qtd_palavras-- ){
        string cargo;
        double salario;

        cin >> cargo >> salario;

        m[cargo] = salario;
    }

    while( qtd_desc-- ){
        double s = 0;
        string desc;

        while(cin >> desc){
            if(desc == "."){
                break;
            }

            s += m[desc];
        }

        cout << s << endl;
    }
    
    return 0;
}