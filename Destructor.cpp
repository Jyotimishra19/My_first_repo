#include<iostream>
using namespace std;
   class demo
 {
    public:
    demo()
  {
    cout<<"constructor here "<<endl;
 }
    ~demo()
 {
    cout<<"Destructor here "<<endl;
 }
 };
    int main()
{
    demo el;
    return 0;
}              
          