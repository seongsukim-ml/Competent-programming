#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Score;
    cin >> Score;

    if(Score > 89)
        cout << "A" << '\n';
    else if(Score > 79)
        cout << "B" << '\n';
    else if(Score > 69)
        cout << "C" << '\n';    else if(Score > 59)
        cout << "D" << '\n';
    else
        cout << "F" << '\n';
}
