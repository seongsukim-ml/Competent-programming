#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(; 0 < T; T--) {

        unsigned int num;
        cin >> num;
        string list1 = bitset<32>(num).to_string();
        string list2("");
        for(int i = 0; i < 4; i++) {
            list2 = list1.substr(8*i,8) + list2;
        }

        long long ans = std::bitset<32>(list2).to_ulong();
        cout << ans << endl;
    }
}
