#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int x, i, count;
    count = 0;

    cin >> x;

    for(i = x; count != 6; i++){
        if(i % 2 != 0){
            cout << i << endl;
            count++;
        }
    }

    return 0;
}

// g++ -std=c++17 -O2 --static solucao.cpp

