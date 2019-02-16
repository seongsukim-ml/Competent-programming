#include <iostream>
#include <string>

using namespace std;

bool A[20001] = {false};
//false => dN으로 안만들어짐

void dN(int n) {
    if(n > 10000)
        return;
    int temp = n;
    while(n > 0){
        temp += n%10;
        n /= 10;
    }
    if(A[temp])
        return;
    A[temp] = true;
    dN(temp);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 1; i <10000; i++)
        if(!A[i])
            dN(i);

    for(int i = 1; i <10000; i++)
        if(!A[i])
            cout << i << '\n';
}
