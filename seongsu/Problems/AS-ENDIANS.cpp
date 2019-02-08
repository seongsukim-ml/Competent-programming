#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(; 0 < T; T--) {
        long long num;
        cin >> num;
        string list1(32,'0');
        for(int i = 0; i < 32; i++) {
            list1[31-i] = '0' + num%2;
            num = num/2;
        }
        string list2(32,'0');
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 8; j++) {
                list2[j+8*i] = list1[j+(3-i)*8];
            }
        }
        long long ans = 0;
        for(int i = 0; i < 32; i++) {
            ans += (list2[31-i]-'0')*pow(2,i);
        }
        cout << ans << endl;
    }
}
