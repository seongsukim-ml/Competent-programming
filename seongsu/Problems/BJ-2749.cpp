#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'
#define ll long long

using namespace std;

int main() {
    ll n;
    sf1(n);

    ll a = 0;
    ll b = 1;
    For(i,0,n){
        ll temp = a + b;
        a = b;
        b = temp;
    }
    pf1(a);
}

//https://www.acmicpc.net/board/view/3332
