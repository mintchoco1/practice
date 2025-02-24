#include <iostream>
#include <cstdlib>
#include <ctime>
#define PI 3.14
using namespace std;
//부모 클래스
class Shape {
protected:
    int _d;  // Dimension of the shape, meaning varies by derived class
    static int cnt;  // Counter for the number of Shape objects

public:
    Shape(int d) : _d(d) { cnt++; }  //생성자라 객체가 생성될 때 마다 호출. _d 를 d로 초기화
    virtual ~Shape() { cnt--; }  // Virtual destructor, decrements count

    virtual void displayTypeAndArea() const = 0;  // Pure virtual function for displaying type and area

    static int getCnt() { return cnt; }  // Static method to get the count of Shape objects
	//static 멤버 함수는 오직 static 멤버변수나 다른 static 멤버 함수에만 접근이 가능
};

int Shape::cnt = 0;

class Circle : public Shape {
public:
    Circle(int d) : Shape(d) {}  //생성자
    virtual ~Circle() { cout << "[Circle] Destructor Called" << endl; }  // Destructor

    void displayTypeAndArea() const override {  // Override the function to display circle info
        double area = PI * _d * _d;  // Area calculation for circle
        cout << "Type: Circle, Area: " << area << endl;
    }
};

class Square : public Shape {
public:
    Square(int d) : Shape(d) {}  // Constructor
    virtual ~Square() { cout << "[Square] Destructor Called" << endl; }  // Destructor

    void displayTypeAndArea() const override {  // Override the function to display square info
        int area = _d * _d;  // Area calculation for square
        cout << "Type: Square, Area: " << area << endl;
    }
};

int main() {
    srand(time(NULL));//난수 생성
    cout << "Press 'c' for circle, 's' for square, and 'q' to quit." << endl;
    cout << "You can create up to 5 objects." << endl << endl;
    Shape* arr[5] = { 0 };  // Array of pointers to Shape objects

    char s;
    int i = 0;
    bool exit = false;
	//무한루프
    while (1) {
        if (Shape::getCnt() >= 5) break;
        cin >> s;
        switch (s) {
            case 'c':
                arr[i] = new Circle(rand() % 10 + 1);//
                cout << endl << "Shape[" << i << "] Created" << endl;
                break;
            case 's':
                arr[i] = new Square(rand() % 10 + 1);
                cout << endl << "Shape[" << i << "] Created" << endl;
                break;
            case 'q':
                exit = true;
                break;
            default:
                continue;
        }
        if (exit) break;
        if (arr[i] != NULL)
            arr[i]->displayTypeAndArea();

        i++;
    }

    cout << endl << Shape::getCnt() << " Objects Created" << endl << endl;

    while (Shape::getCnt() > 0) {
        cout << endl << "Deleting Shape[" << Shape::getCnt() - 1 << "]..." << endl;
        delete arr[Shape::getCnt() - 1];
    }

    cout << endl << endl << "===BYE===" << endl;
    return 0;
}
