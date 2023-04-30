#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int comprimento_estrada, distancia_pedagios;
    int custo_km, valor_pedagio;

    cin >> comprimento_estrada >> distancia_pedagios;
    cin >> custo_km >> valor_pedagio;
    
    int custo = comprimento_estrada * custo_km;
    
    int quantidade_pedagios = comprimento_estrada / distancia_pedagios;
    
    int custo_total = custo + quantidade_pedagios * valor_pedagio;
    
    cout << custo_total << endl;
 
    return 0;
}