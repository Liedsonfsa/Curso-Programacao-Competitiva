#include <bits/stdc++.h>

using namespace std;
 
int main() {

    int n;

    cin >> n;

    cout << endl;

    int c = 1;
   

    while(n--){
        string s;
        double q = 0.0;
        if(c != 1) cout << endl;
        map <string, int> especies;
        //fflush(stdin);
        while(getline(cin, s)){
            if(s.size() == 0) break;
            especies[s]++;
            q++;
        }

        //fflush(stdin);

        for(auto x: especies){
            double perc;

            perc = double((x.second * 100) / q);
            cout << x.first << " " << fixed << setprecision(4) << perc << endl;
        }

        c++;


    }
   
 
    return 0;
}