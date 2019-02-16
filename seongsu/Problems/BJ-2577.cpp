#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    int prod;
    cin >> a;
    cin >> b;
    cin >> c;
    prod = a*b*c;
    string s = to_string(prod);
    int n[10] = {0};
    for(int j = 0; j < s.length(); j++)
        n[(s[j]-'0')]++;
    for(int i = 0; i < 10; i++)
        cout << n[i] << '\n';
}
