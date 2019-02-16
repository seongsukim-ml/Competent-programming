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

    int Test_case;
    cin >> Test_case;
    int ans = 0;
    for(; Test_case > 0; Test_case--){
        bool alp[26] = {false};
        bool res = true;
        string s;
        sf1(s);
        alp[s[0]-'a'] = true;

        For(i,1,s.length()){
           if(!alp[s[i]-'a']){
                alp[s[i]-'a'] = true;
           } else {
               if(s[i-1] != s[i]){
                    res = false;
                    break;
               }
           }
        }

        if(res)
            ans++;
    }
    pf1(ans);
}

