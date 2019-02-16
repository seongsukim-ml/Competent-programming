#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, X;
    cin >> N >> X;
    string ans = "";
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        if(temp < X)
            cout << temp << " ";
    }
}
