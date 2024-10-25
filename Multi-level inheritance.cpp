//write a program to demonstrates multi-level inheritance.
#include <iostream>
using namespace std;
class A {
protected:
    int a;
public:
    void input() {
        cout << "Enter value for a: ";
        cin >> a;
    }
};
class B : public A {
protected:
    int b;
public:
    void getdata() {
        cout << "Enter value for b: ";
        cin >> b;
    }
};
class C : public B {
public:
    void add() {
        cout << "Sum = " << a + b << endl;
    }
};

int main() {
    C obj; 
    obj.input();  
    obj.getdata(); 
    obj.add();     
    return 0;
}

