#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    string Temp;
    cin >> Temp;
    int len = Temp.length()/10;
    for(int i = 0; i < len; i++){
        cout << Temp.substr(i*10,10) << '\n';
    }
    cout << Temp.substr(len*10) << '\n';
}

//123456789012345678901234567890
