#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    while( n-- ){
        stack <string> frutas;
        stack <double> precos;

        int qtdf, qtdc;

        cin >> qtdf;

        while( qtdf-- ){
            string f;
            double p;

            cin >> f >> p;

            frutas.push(f);
            precos.push(p);
        }

        cin >> qtdc;
        pair<string, double> lista[qtdc];

        int i = 0;
        while( i < qtdc ){
            cin >> lista[i].first >> lista[i].second;
            i++;
        }

        double total_pagar, soma = 0;

        for(int i = 0; i < frutas.size(); i++){
            if(lista[i].first == frutas.top()){
                total_pagar = lista[i].second * precos.top();
                frutas.pop();
                precos.pop();
            } else{
                frutas.pop();
                precos.pop();
            }

            soma += total_pagar;
        }


        cout << "R$ " << fixed << setprecision(2) << soma << endl;

    }

    return 0;
}
