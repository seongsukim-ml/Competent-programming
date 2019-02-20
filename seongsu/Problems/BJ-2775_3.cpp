#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define sf3(a,b,c) cin >> a >> b >> c
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'
#define pf3(a,b,c) cout << a << " " << b << " " << c '\n'

using namespace std;

int  *M;

void dp(int K, int A){
    if(!K || !A) return;
    if(M[15*K+A]) return;
    else{
        if(!M[15*(K-1)+A])
            dp(K-1,A);
        if(!M[15*K+(A-1)])
            dp(K,A-1);
        M[15*K+A] = M[15*(K-1)+A] + M[15*K+(A-1)];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    M = new int[15*15];
    For(i,0,15*15) {
        M[i] = 0;
    }
    For(i,0,15) {
        M[i*15] = i;
        M[1*15 + i] = 1;
    }

    int Test_case;
    cin >> Test_case;
    dp(15,15);
    for(; Test_case > 0; Test_case--){
        int K,A;
        sf1(A);
        sf1(K);
        pf1(M[15*K+A]);
    }
}

