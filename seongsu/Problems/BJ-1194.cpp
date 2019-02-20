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

    int X;
    sf1(X);

    if(X == 1) {
        pf1("1/1");
        return 0;
    }

    int n = sqrt(X);
    int sum = n*(n+1)/2;

    while(true){
        if(X > sum && X <= sum+n+1)
            break;
        n++;
        sum += n;
    }

    int t = X-sum;
    if(n%2 == 0)
        cout << n+2-t <<"/"<< t << '\n';
    else
        cout << t << "/" << n+2-t << '\n';
}

