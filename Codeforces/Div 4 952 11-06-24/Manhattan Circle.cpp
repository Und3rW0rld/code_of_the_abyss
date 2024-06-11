#include <bits/stdc++.h>
using namespace std;
//Hola
typedef vector<int> vi;
typedef long long ll;
#define sq(a) (a)*(a)
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define pb(a) push_back(a)
#define endl "\n"

void imprimir(vector<char> arr){
    for (auto val : arr){
        cout << val << " ";
    }
}



int main(){
    int n;
    cin >> n;

    FOR(i, 0, n){
        int n, m;
        string  xx;
        int horizontal, centro;
        int hashtags = 0;

        vector<char> renglon;
        cin >> n >> m;
        FOR(nn, 0, n){
            int temp = 0;
            vector<char> r;
            cin >> xx;
            for(auto x: xx){
                if (x == '#'){
                    temp += 1;
                }
                r.pb(x);
                }

            if (hashtags <= temp){
                renglon = r;
                hashtags = temp;
                horizontal = nn+1;
                }
            

        }
        string renglo (renglon.begin(), renglon.end());
        int primeraPosicion = renglo.find_first_of('#');
        int ultimaPosicion = renglo.find_last_of('#');
        centro = (primeraPosicion + ultimaPosicion)/2;
        cout << horizontal<<" "<<centro+1<<endl;
        



    }


    return 0;
}
