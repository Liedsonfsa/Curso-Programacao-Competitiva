#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int casos;

    cin >> casos;

    //vector<double> notas;

    double dificuldade, n, maior, menor;

    for(int i = 1; i <= casos; i++){
        string nome;
        double soma = 0.0;

        cin >> nome;

        cin >> dificuldade;

        for(int j = 0; j < 7; j++){
            cin >> n;

            if(j == 0){
                maior = n;
                menor = n;
            }

            if(n > maior){
                maior = n;
            }

            if(n < menor){
                menor = n;
            }

            soma += n;


            //notas.push_back(n);
        }

        soma -= maior;
        soma -= menor;

        cout << nome << " " << fixed << setprecision(2) << (soma * dificuldade) << endl;

    }
 
    return 0;
}