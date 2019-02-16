#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int sum = 0;
    for(int i = 0; i < 5; i++) {
         int temp;
         cin >> temp;
         if(temp < 40)
            temp = 40;
         sum += temp;
    }
    sum /= 5;
    cout << sum;
}
