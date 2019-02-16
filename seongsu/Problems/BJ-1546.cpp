#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int max = 0;
    int sum = 0;
    for(int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        sum += temp;
        if(max < temp)
            max = temp;
    }
    cout.precision(6);
    cout << fixed <<(float)sum/max*100/N;
}
