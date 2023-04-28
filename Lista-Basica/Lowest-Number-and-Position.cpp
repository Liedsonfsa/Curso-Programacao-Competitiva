#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, i, menor, pos = 0;
    
    cin >> n;
    
    vector<int> array;

    for(i = 0; i < n; i++){
        int num;

        cin >> num;

        if(i == 0){
            menor = num;
        }

        array.push_back(num);


        if(array[i] < menor){
            menor = num;
            pos = i;
        }
    }

    
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
 
    return 0;
}