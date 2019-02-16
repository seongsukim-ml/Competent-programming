#include <iostream>
#include <string>

using namespace std;

bool equals(int A[], int B[]){
    for(int i = 0; i < 8; i++)
        if(A[i] != B[i])
            return false;
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N[8] = {0};
    cin>>N[0]>>N[1]>>N[2]>>N[3]>>N[4]>>N[5]>>N[6]>>N[7];
    int A[8] = {1,2,3,4,5,6,7,8};
    int B[8] = {8,7,6,5,4,3,2,1};
    if(equals(N,A)) {
        cout << "ascending";
    } else if(equals(N,B)) {
        cout << "descending";
    } else {
        cout << "mixed";
    }
}
