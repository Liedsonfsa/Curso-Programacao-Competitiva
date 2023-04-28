#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
   vector<int> codigo, quantidade;
   
   int n, cod, quant;
   
   cin >> n;
   
   for(int i = 0; i < n; i++){
       cin >> cod >> quant;
       
       codigo.push_back(cod);
       quantidade.push_back(quant);
       
   }
   
   double soma = 0, preco;
   
   for(int i = 0; i < n; i++){
       switch(codigo[i]){
           case 1001:
                preco = 1.50 * quantidade[i];
                soma += preco;
                break;
            case 1002:
                preco = 2.50 * quantidade[i];
                soma += preco;
                break;
            case 1003:
                preco = 3.50 * quantidade[i];
                soma += preco;
                break;
            case 1004:
                preco = 4.50 * quantidade[i];
                soma += preco;
                break;
            case 1005:
                preco = 5.50 * quantidade[i];
                soma += preco;
                break;
       }
   }
   
   cout <<  fixed << setprecision(2) << soma << endl;
   
 
    return 0;
}