#include <bits/stdc++.h>

using namespace std;

int busca_binaria(vector<int>bolinhas, int valor);
 
int main() {
 
    int N, Q;
    
    int i = 1;
    while(cin >> N >> Q){
        if(N == 0 && Q == 0) break;
        
        vector<int> bolinhas;
        for(int i = 0; i < N; i++){
            int c;

            cin >> c;

            bolinhas.push_back(c);
        }
    
        sort(bolinhas.begin(), bolinhas.end());
       
        int j = 0;
        cout << "CASE# " << i << ":" << endl;
        while(Q--){

            int num;

            cin >> num;

            int pos = busca_binaria(bolinhas, num);

            for(int i = pos; bolinhas[i] != num; i--){
                if(bolinhas[i] == num){
                    pos = i;
                }
            }

            if(pos != -1){
                cout << num << " found at " << pos + 1 << endl;
            } else{
                cout << num << " not found" << endl;
            }

            j++;
           
        }
        i++;
        
    }
 
    return 0;
}

int busca_binaria(vector<int>bolinhas, int item){
    int begin = 0;
    int end = bolinhas.size() - 1;

    while (true) {  

        if(begin > end) return -1;
        int i = (begin + end) / 2;  

        if (bolinhas[i] == item) {  
            return i;
        }

        if (bolinhas[i] < item) {  
            begin = i + 1;
        } else { 
            end = i - 1;
        }
    }

   
}