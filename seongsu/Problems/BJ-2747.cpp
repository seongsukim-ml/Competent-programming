#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'

using namespace std;

int main() {
    int n;
    sf1(n);

    int a = 0;
    int b = 1;
    For(i,0,n){
        int temp = a + b;
        a = b;
        b = temp;
    }
    pf1(a);
}

