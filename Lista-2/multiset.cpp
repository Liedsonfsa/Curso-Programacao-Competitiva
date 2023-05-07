#include <bits/stdc++.h>

using namespace std;

int main() {

    multiset <int> n;
    stack <int> pilha;


    n.insert(1);
    n.insert(0);
    n.insert(1);
    n.insert(2);
    n.insert(2);
    n.insert(3);
    n.insert(7);
    n.insert(6);
    pilha.push(1);
    pilha.push(0);
    pilha.push(2);

    cout << "n.begin(): " << *n.begin() << endl;


    cout << "n.end(): " << *n.end() << endl;


    multiset <int>:: iterator it;

    for(it = n.begin(); it != n.end(); ++it){
        cout << *it << " ";
    }

    multiset <int>:: iterator i;

    cout << endl;

    i = *n.find(pilha.top());
    n.erase(m);
    pilha.pop();
    int m = *n.find(pilha.top());
    n.erase(m);
    pilha.pop();
    int m = *n.find(pilha.top());
    n.erase(m);
    pilha.pop();

    for(it = n.begin(); it != n.end(); ++it){
        cout << *it << " ";
    }



    return 0;
}
