#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    while( n-- ){
        map <string, double> compras;

        int qtdf, qtdc;

        cin >> qtdf;

        while( qtdf-- ){
            string fruta;
            double valor;

            cin >> fruta >> valor;

            compras[fruta] = valor;
        }



        cin >> qtdc;
        double total = 0;

        while( qtdc-- ){
            string fruta;
            double qtd, t = 0;


            cin >> fruta >> qtd;

            if(compras[fruta]){
                t += compras[fruta];
                t *= qtd;
            }

            total += t;

        }

       
        cout << "R$ " << fixed << setprecision(2) << total << endl;

    }

    return 0;
}
