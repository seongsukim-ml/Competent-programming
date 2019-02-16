#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B,C;
    cin >> A >> B >> C;
    int ans = C;

    if(A >= B) {
        if(B >= C)
            ans = B;
        else if(C >= A)
            ans = A;
    }
    else{
        if(A >= C)
            ans = A;
        else if(C >= B)
            ans = B;
    }

    cout << ans;
}
