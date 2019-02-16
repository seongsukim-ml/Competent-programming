#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string *stars;

string[] maker(int k){
    string ret[k*3+1] = new string[k*3+1];
    if(k==0) {
        ret[1] = "*";
        ret[2] = "* *";
        ret[3] = "*****";
    } else {
        temp = maker(k-1);
        for(int i = 1; i <= pow(2,k-1); i = i*2){
            for(int j = (i-1)*3; j < 3*i*2)
        }
    }
    return ret;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    temp = N/3;
    k = -1;
    while(temp>0){
        k++;
        temp /= 2;
    }

    &stars = new string[N+1];
    for(int i = 0;i < k)
}
