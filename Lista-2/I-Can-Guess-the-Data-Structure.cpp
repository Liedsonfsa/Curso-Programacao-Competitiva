#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

    int n;

    while( cin >> n ){
        int op, num;
        vector <int> input, output;

        for(int i = 1; i <= n; i++){
            cin >> op >> num;

            if(op == 1){
                input.push_back(num);
            } else{
                output.push_back(num);
            }
        }

        
    }
    
    return 0;
}