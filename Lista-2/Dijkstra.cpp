#include <bits/stdc++.h>

using namespace std;

int main() {

    set <string> joias_no_repeat;

    string joias;

    while(cin >> joias){
        joias_no_repeat.insert(joias);
    }

    cout << joias_no_repeat.size() << endl;
    
    return 0;
}