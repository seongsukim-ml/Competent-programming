#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'
#define pf3(a,b,c) cout << a << " " << b << " " << c <<'\n'
#define body ans++;if(i == A.length()-2) ans--;i++;

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A;
    sf1(A);
    int ans = 1;
    For(i,0,A.length()-1){
        if(i < A.length()-2 &&(A[i] == 'd' && A[i+1] == 'z' && A[i+2] == '=')){
                ans++;
                if(i == A.length()-3) ans--;
                i += 2;

        }
        else if(A[i] == 'c'&&(A[i+1] == '=' || A[i+1] == '-')){
                body
        }
        else if((A[i] == 'l') && (A[i+1] == 'j')){
                body
        }
        else if((A[i] == 's' || A[i] == 'z')&& A[i+1] == '='){
                body
        }
        else if((A[i] == 'd')&&(A[i+1] == '-')){
                body
        }
        else if((A[i] == 'n')&&(A[i+1] == 'j')){
                body
        } else {
            ans++;
        }
    }
    pf1(ans);
}

