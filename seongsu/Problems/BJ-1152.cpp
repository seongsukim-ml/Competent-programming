#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    getline(cin,A);
    int n = 0;
    for(int i = 1; i < A.length()-1; i++){
        if(A[i] == ' '){
            n++;
        }
    }
    if(A == " "){
        cout << 0;
    }
    else if(n != 0) {
        n++;
        cout << n;
    }
}
