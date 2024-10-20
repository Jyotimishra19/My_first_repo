//Here’s a simple C++ program demonstrating the use of static member functions:

#include <iostream>
using namespace std;

class MyClass {
public:
    static void displayMessage() {  
        cout << "This is a static member function." << endl;
    }
};

int main() {
    MyClass::displayMessage();
    
    return 0;
}
