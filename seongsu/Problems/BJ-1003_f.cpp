#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'
#define ll long long

using namespace std;

ll A, B;

int fibonacci(int n) {
    if (n == 0) {
        A++;
        return 0;
    } else if (n == 1) {
        B++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--){
        A = 0; B = 0;

        int N;
        sf1(N);

        fibonacci(N);
        pf2(A,B);
    }
}

