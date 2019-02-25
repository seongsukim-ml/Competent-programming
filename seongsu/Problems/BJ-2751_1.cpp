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

void Swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void merge(int *arr, int left, int mid, int right){
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    while(i <= mid && j <= right) {
        if(arr[i] >= arr[j])
            sorted[k++] = arr[i++];
        else
            sorted[k++] = arr[j++];
    }

    if(i > mid){
        for(l= j;l<=right; l++)
            sorted[k++] = arr[l];
    }

    else{
        for(l=i; l <=mid; l++)
            sorted[k++] = arr[l];
    }
}

void merge_sort(int *arr, int left, int right){
    int mid;

    if(left<right){
        mid = (left+right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
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

    merge_sort(arr,0,length-1);
    For(i,0,length)
        pf1(arr[i]);
}

