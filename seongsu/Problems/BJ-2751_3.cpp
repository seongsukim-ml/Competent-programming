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

int *sorted;

void merge(int *arr, int left, int mid, int right){
    int i,j,k,l;
    i = left;
    j = mid+1;
    k = right;
    l = left;
    while(i <= mid && j <= right){
        if(arr[i] < arr[j])
            sorted[l++] = arr[i++];
        else
            sorted[l++] = arr[j++];
    }

    if(i > mid){
        For(ind,j,right+1)
            sorted[l++] = arr[ind];
    }
    else {
        For(ind,i,mid+1)
            sorted[l++] = arr[ind];
    }
    For(ind,left,right+1)
        arr[ind] = sorted[ind];
}

void mergeSort(int *arr, int left, int mid, int right){
//    pf3(left,mid,right);
    if(left >= right)
        return;
    mergeSort(arr,left,(left+mid)/2,mid);
    mergeSort(arr,mid+1,(mid+right+1)/2,right);
//    pf1("merge");
//    pf3(left,mid,right);
    merge(arr,left,mid,right);
}


int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int length;
    sf1(length);
    int *arr = new int[length];
    sorted = new int[length];

    For(i,0,length){
        int temp;
        sf1(temp);
        arr[i] = temp;
    }

    mergeSort(arr,0,length/2,length-1);

    For(i,0,length)
        pf1(arr[i]);
}

