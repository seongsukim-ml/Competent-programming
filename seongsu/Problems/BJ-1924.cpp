#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string day[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    int x,y;
    cin >> x >> y;
    int dif = y-1;
    for(int i = 0; i < x-1; i++)
        dif += days[i];
    cout << day[dif%7] << '\n';
}
