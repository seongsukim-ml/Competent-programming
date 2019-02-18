#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'

using namespace std;

int main() {
    int n;
    sf1(n);
    int ans = 0;
    int temp = 0;
    if(n != 1) {
        n--;
        while(true){
            ans++;
            if(n>temp*6 && n <=(temp + ans)*6)
                break;
            temp += ans;
        }
    }
    pf1(ans+1);
}
// 1 2-6 7-18

