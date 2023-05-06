#include <bits/stdc++.h>

using namespace std;

int main() {

    map <string, double> map;

    int n, m;

    cin >> n >> m;

    

    while( n-- ){

        string cargo;
        double salario;
        
        cin >> cargo >> salario;

        map[cargo] = salario;
    }

    string descricao = "";
    double soma = 0;
    

    while( descricao != '.'){
        cin >> descricao;

        for (auto i : map){
            if(i.first == descricao){
                soma += i.second;
            }
        }

    }

    cout << soma << endl;
    
    return 0;
}