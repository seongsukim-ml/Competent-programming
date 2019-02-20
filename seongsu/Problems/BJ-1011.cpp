#include <iostream>
#include <string>
#include <math.h>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--){
        int X,Y;
        sf2(X,Y);
        int d = Y-X;
        int ans = sqrt(d);
        int sum = ans*ans;
        if(d == sum) ans = ans*2-1;
        else if(d > sum + ans) ans = ans*2+1;
        else ans = ans*2;
        pf1(ans);
    }
}
// 1번 -> 1 ~1
// 2번 -> 1 1 ~2
// 3번 -> 1 2 1 ~4
// 4번 -> 1 2 2 1 ~6
// 5번 -> 1 2 3 2 1 ~9
// 6번 -> 1 2 3 3 2 1 ~12
// 7번 -> 1 2 3 4 3 2 1 ~ 16

