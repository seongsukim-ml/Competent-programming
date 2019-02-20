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

    int **N = new int*[15];
    For(i,0,15) {
        N[i] = new int[15];
        fill_n(N[i],15,0);
    }

    For(j,0,15) {
        N[0][j] = j;
        N[j][1] = 1;
    }

    For(i,1,15)
        For(j,1,15){
            N[i][j] = N[i][j-1] + N[i-1][j];
    }

    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--){
        int K,A;
        sf1(K);
        sf1(A);
        pf1(N[K][A]);
    }
}

