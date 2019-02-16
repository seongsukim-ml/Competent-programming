#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N1;
    cin >> N1;
    int N2 = N1;
    int i = 0;
    while(true)
    {
        i++;
        int M =  (N2/10 + N2%10)%10;
        M += (N2 % 10)*10;
        if(M == N1)
            break;
        N2 = M;
    }
    cout << i << '\n';
}
