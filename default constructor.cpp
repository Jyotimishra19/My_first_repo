#include<iostream>
using namespace std;
class demo
{
  int a,b;
  public:
  demo()
{ 
  a=3;
  b=4;
} 
 int show()
{ 
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
}
};
   int main()
 {
   demo d;
   d.show();
   return 0;
}       
       