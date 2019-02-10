#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 1; i <N+1; i++){
        for(int j = 0; j < N-i+1; j++)
            cout << "*";
        cout << '\n';
    }
}
