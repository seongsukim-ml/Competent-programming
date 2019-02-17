#include <iostream>
#include <string>
#include <cstdlib>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    sf2(a,b);
    string A = to_string(a), B = to_string(b);
    string c = "",d = "";
    For(i,0,A.length())
        c = c + A[A.length()-1-i];

    For(i,0,B.length())
        d = d + B[B.length()-1-i];
    a = atoi(c.c_str());
    b = atoi(d.c_str());
    if(a > b)
        pf1(a);
    else
        pf1(b);
}

