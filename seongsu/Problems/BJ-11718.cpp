#include <iostream>
#include <string>

using namespace std;

int main() {
    while(1) {
        string Temp;
        getline(cin,Temp);
        if(Temp == "\0")
            break;
        cout << Temp << endl;
    }
}
// ctrl + Z가 윈도우에서는 EOF이다.
