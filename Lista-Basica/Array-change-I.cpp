#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int v[20], i, l = 0;
    
    for(i = 0; i < 20; i++){
        cin >> v[i];
    }
    
    for(i = 20 - 1; i >= 0; i--){
        cout << "N[" << l << "] = " << v[i] <<  endl;
        l++;
    }
 
    return 0;
}