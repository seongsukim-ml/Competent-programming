#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    cout << N*(N+1)/2 << '\n';
}
