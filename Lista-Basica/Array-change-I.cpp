#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, i, l = 0;
    vector<int> array;
    
    for(i = 0; i < 20; i++){
        cin >> n;
        array.push_back(n);
    }
    
    for(i = 20 - 1; i >= 0; i--){
        cout << "N[" << l << "] = " << array[i] <<  endl;
        l++;
    }
 
    return 0;
}