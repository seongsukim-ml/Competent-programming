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

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

class Heap {
    int length;
    int *arr;
    int size;
public :
    Heap(int _length) : length(_length),arr(new int[_length+1]){size = 0;};

    void push(const int x) {
        size++;
        arr[size] = x;
        shake1();
    }

    void shake1() {
        int i = size;
        while(i > 1){
            if(arr[i] < arr[i/2])
                Swap(arr[i],arr[i/2]);
            i /= 2;
        }
    }

    int pop() {
        int ret = arr[1];
        Swap(arr[1],arr[size]);
        size--;
        shake2();
        return ret;
    }

    void shake2() const {
        int i = 1;
        while(true){
            int left = 2*i;
            int right = 2*i+1;
            if(left > size){
                break;
            }
            if(left == size){
                if(arr[i] > arr[left])
                    Swap(arr[i], arr[left]);
                i = left;
            } else {
                if(arr[i] > arr[left] || arr[i] > arr[right]){
                    if(arr[left] < arr[right]){
                        Swap(arr[i], arr[left]);
                        i = left;
                    } else{
                        Swap(arr[i], arr[right]);
                        i = right;
                    }
                }
            }
        }
    }
};

int main() {
    int length;
    sf1(length);
    Heap A(length);

    For(i,0,length){
        int temp;
        sf1(temp);
        A.push(temp);
    }

    For(i,0,length){
        pf1(A.pop());
    }
}

