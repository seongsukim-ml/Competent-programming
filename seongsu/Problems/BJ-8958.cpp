#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test_case;
    cin >> Test_case;
    string N;
    for(; Test_case > 0; Test_case--){
        cin >> N;
        int score = 0;
        int suc = 0;
        for(int i = 0; i < N.length(); i++){
            if(N[i] == 'O'){
                suc++;
                score += suc;
            } else {
                suc = 0;
            }
        }
        cout << score << '\n';
    }
}
