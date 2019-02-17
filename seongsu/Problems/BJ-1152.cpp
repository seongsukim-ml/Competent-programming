#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    getline(cin,A);
    if(A[0] == ' ')
        A = A.substr(1);
    if(A[A.length()-1] == ' ')
        A = A.substr(0,A.length()-1);
    int ans =0;
    if(A == ""){
        cout << ans;
    } else {
        for(int i = 0; i <A.length(); i++) {
            if(A[i] == ' '){
                ans++;
            }
        }
        ans++;
        cout << ans;
    }
}
