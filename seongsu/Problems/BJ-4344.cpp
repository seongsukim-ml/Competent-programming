#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--){
        int N;
        cin >> N;
        int arr[N];
        double avg = 0;
        for(int i = 0; i < N; i++) {
            int temp;
            cin >> temp;
            avg += temp;
            arr[i] = temp;
        }
        avg /= N;
        int K = 0;
        for(int i = 0; i <N; i++) {
            if(arr[i] >avg)
                K++;
        }
        cout.precision(3);
        cout << fixed << (double)100*K/N << "%\n";
    }
}
