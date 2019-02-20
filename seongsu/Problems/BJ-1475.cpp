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

    int *n = new int[10];
    fill_n(n,10,0);

    int T;
    sf1(T);
    while(T > 0){
        n[T%10] += 1;
        T /= 10;
    }

    n[6] += n[9];
    if(n[6]%2)
        n[6] += 1;
    n[6] /= 2;

    int max = 1;
    For(i,0,9) {
        if(n[i] > max){
            max = n[i];
        }
    }
    pf1(max);
}

