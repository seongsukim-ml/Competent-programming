#include <iostream>
#include <string>

using namespace std;

string rec(string input) {
    string A[input.length()/2];
    for(int i = 0; i < input.length()/2;i++) {
        A[i] = input.substr(i*2,i*2+2);
    }
    return rec(A);
}
string rec(string[] inputs) {
    if(inputs.length() == 1) {
        return inputs[0];
    } else {
        string temp = inputs[0];
        int max = 0;
    }
    for(int i = 0; i < inputs.length();i++) {
        if(temp < inputs[i]) {
            temp = inputs[i];
            max = i;
        }
    }

}


int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--){

    }
}
