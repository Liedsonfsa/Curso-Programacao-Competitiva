#include <bits/stdc++.h>
 
using namespace std;
 
int main() {


    int n;

    cin >> n;

    while( n-- ){
        string arr;
        stack<int> pilha;

        cin >> arr;
        int esq = 0;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == '<'){
                esq++;
            } else if(arr[i] == '>'){
                if(esq > 0){
                    pilha.push(1);
                    esq--;
                } 
            }
        }

        cout << pilha.size() << endl;
        
    }
    
    return 0;
}