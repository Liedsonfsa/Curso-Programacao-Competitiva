#include <bits/stdc++.h>

using namespace std;

int busca(vector<int>num, int inicio, int final, int n);

int main() {
    int n, quantidade, i;
    scanf("%d", &n);

    vector <int> precos;

    for(int i = 0; i < n; i++){
        int p;

        scanf("%d", &p);

        precos.push_back(p);
    }

    sort(precos.begin(), precos.end());
    
    int dias;

    scanf("%d", &dias);
    long int valor;

    while(dias--){

        cin >> valor;

        quantidade = busca(precos, 0, n, valor);

        printf("%d\n", quantidade);
    }

    return 0;
}

int busca(vector<int>num, int inicio, int final, int n){
    int meio = (inicio + final) / 2;

    if(num[meio] == n){
        return meio;
    }

    if(num[meio] > n){
        return busca(num, inicio, meio, n);
    } else if(num[meio] < n){
        return busca(num, meio, final, n);
    }
}

