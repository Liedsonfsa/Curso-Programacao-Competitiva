#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, h;

    cin >> n;

    vector<int> paisagem;

    bool padrao = true;

    for(int i = 0; i < n; i++){
        cin >> h;

        paisagem.push_back(h);
    }

    if(n == 2 && paisagem[0] == paisagem[1]){
        padrao = false;
    } else{
        for(int i = 2; i < n; i++){ 
            if(paisagem[i] >= paisagem[i - 1] && paisagem[i - 1] >= paisagem[i - 2]){
                padrao = false;
                break;
            } else if(paisagem[i] <= paisagem[i - 1] && paisagem[i - 1] <= paisagem[i - 2]){
                padrao = false;
                break;
            }
        }
    }
    
    cout << padrao << endl;  

    return 0;
}