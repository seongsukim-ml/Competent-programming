#include <iostream>
#include <string>
#include <algorithm>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    sf1(s);
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    int alpha[26] = {0};
    For(i,0,s.length())
        alpha[s[i] - 'a']++;
    int max = 0;
    bool isUnique = true;
    For(i,1,26) {
        if(alpha[i] > alpha[max]){
            max = i;
            isUnique = true;
        } else if (alpha[i] == alpha[max]) {
            isUnique = false;
        }
    }
    if(!isUnique)
        pf1("?") ;
    else
        pf1(char('A'+max)) ;
}

