#include <iostream>

using namespace std;

int main() {
    int A;
    cin >> A;
    int ans;
    if(A%5 == 0)
        ans = A/5;
    else if(A%5 == 3)
        ans = A/5 + 1;
    else if((A-3)%5 == 3)
        ans = (A-3)/5 + 2;
    else if((A-6)%5 == 3)
        ans = (A-6)/5 + 3;
    else if((A-9)%5 == 3)
        ans = (A-9)/5 + 4;
    else if(A%3 == 0)
        ans = A/3;
    else
        ans = -1;
    cout << ans << endl;
}
