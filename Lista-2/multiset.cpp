#include <bits/stdc++.h>

using namespace std;

int main() {

    multiset <int, greater<int>> n;

    n.insert(4);
    n.insert(2);
    n.insert(34);
    n.insert(4200);
    n.insert(19);
    n.insert(1);
    n.insert(9);
    n.insert(8);
    n.insert(3);

    cout << "n.begin(): " << *n.begin() << endl;


    cout << "n.end(): " << *n.end() << endl;


    multiset <int, greater<int>>:: iterator it;

    for(it = n.begin(); it != n.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}
