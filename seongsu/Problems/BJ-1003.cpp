#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'

using namespace std;

long long *dp0, *dp1;

void fibonacci(int n) {
    if(n == 0)
        return;
    if(n == 1)
        return;
    if(dp0[n] == 0 && dp1[n] == 0) {
        if(dp0[n-1] == 0 && dp1[n-1] == 0)
            fibonacci(n-1);
        if(dp0[n-2] == 0 && dp1[n-2] == 0)
            fibonacci(n-2);
        dp0[n] = dp0[n-1] + dp0[n-2];
        dp1[n] = dp1[n-1] + dp1[n-2];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    dp0 = new long long[41];
    dp1 = new long long[41];
    For(i,0,41){
        dp0[i] = 0;
        dp1[i] = 0;
    }
    dp0[0] = 1;
    dp1[1] = 1;
    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--){
        int N;
        sf1(N);

        fibonacci(N);
        pf2(dp0[N],dp1[N]);
    }
}

