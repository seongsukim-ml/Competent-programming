#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int alpha[26];
    fill_n(alpha,26,-1);
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(alpha[s[i]-'a'] == -1)
            alpha[s[i]-'a'] = i;
    }
    for(int i = 0; i <26; i++){
        cout << alpha[i] << " ";
    }
}
