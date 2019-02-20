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

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--){
        int H,W,N;
        sf3(H,W,N);
        N--;

        int N1 = N/H+1;
        int N2 = N%H+1;
        if(N2 == 0) N2 = H;

        string res = "";
        res += to_string(N2);
        if(N1 < 10) res += '0';
        res += to_string(N1);

        pf1(res);
    }
}

