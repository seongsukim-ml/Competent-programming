#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 1; i <N+1; i++){
        for(int k = 0; k < N-i; k++)
            cout << " ";
        for(int j = 0; j < i; j++)
            cout << "*";
        cout << '\n';
    }
}
