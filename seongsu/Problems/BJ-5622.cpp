#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alp[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    int ans = 0;
    string A;
    sf1(A);
    For(i,0,A.length())
        ans += alp[A[i]-'A'] + 1;
    pf1(ans);
}

