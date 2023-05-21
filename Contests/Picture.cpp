#include <bits/stdc++.h>

using namespace std;

int main() {

    int w, h;

    while(cin >> w >> h){
        for(int i = 0; i < w + 2; i++){
            for(int j = 0; j < w + 2; j++){
                if((j == 0 || j == w + 2) && (i == h + 2)){
                    cout << "+";
                }

                if(i > 0 && i == 1 || i == w + 2){
                    cout << "|";
                }

                if(j < w + 2){
                    cout << " ";
                }


            } cout << endl;

        }
        cout << endl;

    }


    
    return 0;
}