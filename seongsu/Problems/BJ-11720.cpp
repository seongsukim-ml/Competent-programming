#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int ans = 0;
    string Temp;
    cin >> Temp;
    for(int i = 0; i < N; i++)
        ans += Temp.at(i) - '0';
    cout << ans << '\n';
}
