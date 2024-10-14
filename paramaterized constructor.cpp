#include<iostream>
using namespace std;
class demo
{
  int a,b;
  public:
  demo(int x, int y)
{ 
  a=x;
  b=y;
} 
 void show()
{ 
  cout<<"A="<<a<<endl;
  cout<<"B="<<b<<endl;
}
};
   int main()
 {
   demo aa(10,20);
   aa.show();
   return 0;
}       