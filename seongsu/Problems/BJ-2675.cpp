#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a;
#define sf2(a,b) cin >> a >> b;
#define pf1(a) cout << a << '\n';

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--){
        int num;
        string s;
        sf2(num,s);
        string res = "";
        For(i,0,s.length())
            For(j,0,num)
                res += s[i];
        pf1(res);
    }
}
