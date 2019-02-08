#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(; 0 < T; T--) {
        unsigned int num;
        cin >> num;
        string list1("");
        unsigned int mask = 1;
        for(int i = 0; i < 32; i++) {
            if((mask&num) == 0)
                list1 = "0" + list1;
            else
                list1 = "1" + list1;
            mask <<= 1; //shift ¿¬»ê
        }
        string list2("");
        for(int i = 0; i < 4; i++) {
            list2 = list1.substr(8*i,8) + list2;
        }

        long long ans = std::bitset<32>(list2).to_ulong();
        cout << ans << endl;
    }
}

//https://peter.bloomfield.online/2015/02/convert-a-number-to-a-binary-string-and-back-in-cpp/
