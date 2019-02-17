#include <iostream>
#include <string>
#include <math.h>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'

using namespace std;

string* starMaker(int K){
    int sizeM = 3*pow(2,K);
    string *res = new string[sizeM];
    if(K == 0){
        res[0] = "*";
        res[1] = "* *";
        res[2] = "*****";
    } else {
        string* temp = starMaker(K-1);
        for(int i = 0; i < sizeM/2; i++){
            string blank(sizeM-1-2*i,' ');
            res[i] = temp[i];
            res[sizeM/2+i] = temp[i] + blank + temp[i];
        }
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    sf1(N);
    int K = 0;
    int T = N/3;
    while(T > 1) {
        T /= 2;
        K++;
    }
    string* stars = starMaker(K);
    For(i,0,N){
        string blank(N-i-1,' ');
        cout << blank << stars[i] << blank << '\n';
    }
}

