# 뇌를 자극하는 C++ STL
## 1. STL을 학습하기 전 꼭 알아야 할 C++ 문법

### 1장. 연산자 오버로딩
- - -
#### - const는 무엇인가?
1. const는 기호 상수를 정의하는 예약어이다.
2. 이는 함수를 실행 해도 const 변수는 수정되지 않는다는 걸 의미한다.
3. 그래서 비파괴적인 함수를 만들때는 const를 사용한다.
4. const 멤버 함수 -> const 변수는 const 함수만 불러올 수 있다. 파괴되면 안되니까.

```cpp
class Point{
	int x;
    int y;
public:
	Point(int _x = 0, int _y = 0):x(_x),y(_y) {} // 생성자
	int GetXY() const {return x+y;} // const 함수
    void SetXY(int _x, int _y) { // non-const 함수
    	x = _x;
        y = _y;
    }
}

int main() {
	const Point p1(3,4); // const
    Point p2(5,6); //non-const
    
    p1.GetXY();
    p2.GetXY();
    p1.SetXY(0,0); // 에러
    p2.SetXY(0,0); 
};
```
- - -
#### - 연산자 오버로딩 정의 및 사용
1. 기본적으로 `p1 + p2`는 `p1.operator+(p2);`와 같다.
2. 그러므로 오버로딩을 사용하기 위해선,
3. 먼저 p1 객체를 정의하고, 객체의 클래스 함수를 정의하여 불러온다.
4. 예시) Point라는 객체를 정의하여서 + 연산자를 정의해본다.

```cpp
class Point{
    int x;
    int y;
public:
    Point(int _x =0, int _y = 0):x(_x),y(_y){ }
    void Print() const {
        cout << x << ',' << y << endl;
    }
    const Point operator+(const Point &arg) const {
        Point pt;
        pt.x = this->x + arg.x;
        pt.y = this->y + arg.y;

        return pt;
        }
};
```
    
- - -
#### - 단항 연산자
1. 오버로딩이 가능한 단항 연산자는 `!, & , ~, *, +, -, ++, --` 총 8개 이다.
2. ++ 오버로딩 예시
3. ++는 전위와 후위가 있다.
4. 전위는 `x.operator++();` 이고 후위는 `x.operator++(0);` 이다.

```cpp
class Point{
    int x;
    int y;
public:
    Point(int _x =0, int _y = 0):x(_x),y(_y){ }
    void Print() const {
        cout << x << ',' << y << endl;
    }
    const Point& operator++() { //const 함수 아님, return값이 현재 Point변수의 주소의 const
    	++x;
        ++y;
        return *this;
    }
    
    const Point operator++(int) {
    	Point pt(x,y);
        ++x;
        ++y;
        return pt;
    }
};
// P를 먼저 선언하는거랑 나중에 선언하는 거랑 다르네?
// 아하 리턴하는 값은 원래래로, 함수 내용은 ++ 그러면 리턴값과 원래의 객체 값이 다르다.
```

1. `-- 오버로딩 예시`

```cpp
class Point {
	int x;
    int y;
public:
	Point(int _x = 0; int _y = 0;):x(_x),y(_y);
	
    const Point& operator--() {
    	x--;
        y--;
        return *this;
    }
    
    const Point operator--(int) {
    	Point pt(x,y);
        x--;
        y--;
        return pt;
    }
}
```
- - -
#### - 전역 함수를 이용한 연산자 오버로딩
- 멤버 함수를 사용할 때

```cpp
p1 + p2; // 같은 class 두개를 연산할 때는 멤버 함수로 오버로딩 된다.
p1.operator+(p2);
```

- 전역 함수를 사용할 때

```cpp
36 + p2; // 서로 class가 다른 두개를 연산할 때는 전역 함수로 오버로딩 된다.
operator+(36,p2);
```

- 예시

```cpp
const Point operator-(const Point& argL, const Point& argR) {
	retrun Point(argL.GetX() - argR.GetX(),argL.GetY() - argR.GetY());
}

const Point operator-(const int argL, const Point& argR) {
	retrun Point(argL - argR.GetX(),argL - argR.GetY());
}
```
- - -
#### - friend
1. 프렌드에는 함수 프렌드와 클래스 프렌드 두 가지가 있다.
2. 함수나 클래스를 프렌드로 지정하면 모든 클래스 멤버를 접근 제한 없이 사용할 수 있다.

```cpp
//함수 friend 예시
class A {
	,,,,
    friend void Func();
};

void Func(){
	// class A의 모든 멤버를 접근 제한 없이 사용할 수 있음
}

// 클래스 friend 예시

class A {

	friend class B;
};

class B {
	// class A의 모든 멤버를 접근 제한 없이 사용할 수 있음.
}
```

### 2장. 함수 포인터
### 3장. 함수 객체
### 4장. 템플릿