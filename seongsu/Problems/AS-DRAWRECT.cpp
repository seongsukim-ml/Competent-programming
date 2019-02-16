#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Test_case;
    cin >> Test_case;
    for(; Test_case > 0; Test_case--)
    {
        int A[3][2];
        for(int i = 0; i < 3; i++)
        {
            cin >> A[i][0] >>  A[i][1];
        }
        int pos[2];
        for(int i = 0; i < 2; i++)
        {
            if(A[0][i] == A[1][i])
            {
                pos[i] = A[2][i];
            }
            else if(A[0][i] == A[2][i])
            {
                pos[i] = A[1][i];
            }
            else
            {
                pos[i] = A[0][i];
            }
        }
        cout << pos[0] << " " << pos[1] << endl;
    }
}

