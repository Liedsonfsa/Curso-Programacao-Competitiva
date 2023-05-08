#include <bits/stdc++.h>

using namespace std;
 
int main() {

    int n;

    cin >> n;
   

    while(n--){
        cout << endl;
        string s;
        double q = 0.0;
        map <string, int> especies;
        fflush(stdin);
        while(getline(cin, s)){
            if(s.size() == 0) break;
            if(especies[s]){
                especies[s] += 1;
            } else{
                especies[s] = 1;
            }

            q++;
        }

        fflush(stdin);

        for(auto x: especies){
            double perc;

            perc = double((x.second * 100) / q);
            cout << x.first << " " << fixed << setprecision(4) << perc << endl;
        }


    }
   
 
    return 0;
}