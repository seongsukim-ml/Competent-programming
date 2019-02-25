#include <iostream>
#include <string>
#include <queue>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define sf3(a,b,c) cin >> a >> b >> c
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'
#define pf3(a,b,c) cout << a << " " << b << " " << c << '\n'

using namespace std;

priority_queue<int,vector<int>,greater<int> > q1;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int length;
    sf1(length);

    int *a = new int[10001];
    fill_n(a,10001,0);
    For(i,0,length){
        int temp;
        sf1(temp);
        if(!a[temp]){
            q1.push(temp);
        } else{
            a[temp] += 1;
        }
    }

    For(i,0,length){
        pf1(q1.top());
        q1.pop();
    }
}

