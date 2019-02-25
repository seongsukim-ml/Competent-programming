#include <iostream>
#include <string>
#define For(i,a,b) for(int i = a; i < b; i++)
#define sf1(a) cin >> a
#define sf2(a,b) cin >> a >> b
#define sf3(a,b,c) cin >> a >> b >> c
#define pf1(a) cout << a << '\n'
#define pf2(a,b) cout << a << " " << b << '\n'
#define pf3(a,b,c) cout << a << " " << b << " " << c << '\n'

using namespace std;

void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int *arr, int size){
    For(i,0,size){
        For(j,i,size){
            if(arr[i] > arr[j])
                Swap(arr[i],arr[j]);
}


int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int length;
    sf1(length);
    int *arr = new int[length];

    For(i,0,length){
        int temp;
        sf1(temp);
        arr[i] = temp;
    }

    bubbleSort(arr,length);
    For(i,0,length)
        pf1(arr[i]);
}

