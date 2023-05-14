#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, k;
    
    cin >> n >> k;
    
    int v[n];
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    //vector <int> sum(n + 1);
    
    //sum[0] = 0;

    int sum = 0, retangulos = 0;

    for(int i = 0; i < n; i++){
        sum += v[i];

        if(sum == k){
            retangulos++;
            cout << "Retangulo formado na posicao " << i << endl;
            //sum = 0;
        } else if(sum > k && sum < k * 2){
            sum = v[i];
        } else if(sum > k){
            sum = 0;
        }
        
    }

    cout << retangulos << endl;
    
    
 
    return 0;
}