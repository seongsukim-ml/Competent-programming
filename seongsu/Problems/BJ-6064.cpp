#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define sf3(a,b,c) cin >> a >> b >> c
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'
#define pf3(a,b,c) cout << a << " " << b << " " << c << '\n'
#define ll int

using namespace std;

ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
ll lcm(ll a, ll b) { if (a == 0 || b == 0)return a + b; return a * (b / gcd(a, b)); }

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--){
        int M, N, x, y;
        cin >> M >> N >> x >> y;

        int lcm1 = lcm(M,N);
        int ans = -1;
        int temp = 0;
        while(true){
            if(temp*M > lcm1) break;
            if((temp*M + x)%N == y%N){
                ans = temp*M + x;
                break;
            }
            temp++;
        }
        pf1(ans);
    }
}

