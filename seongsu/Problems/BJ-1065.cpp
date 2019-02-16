#include <iostream>
#include <string>

using namespace std;

int dN(int i)
{
    if(i <= 10)
        return 1;

    int n = i;
    int t = i%10;
    int diff = 10;
    while(n>9)
    {
        n /= 10;
        if(diff == 10)
            diff = n%10 - t;
        else
        {
            if(diff != n%10 - t)
                return 0;
        }
        t = n%10;
    }
    return 1;
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int ans = 0;
    for(int i = 1; i <= N; i++)
    {
        ans += dN(i);
    }
    cout << ans;
}
