#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int n, i;

    cin >> n;

    vector<int> array;

    array.push_back(0);
    array.push_back(1);

    cout << array[0] << " " << array[1];

    for(i = 2; i < n; i++){
        array.push_back(array[i - 1] + array[i - 2]);
        
        cout << " " << array[i];
    }

    cout << endl;

    return 0;
}