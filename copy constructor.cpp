#include<iostream>
using namespace std;
class demo
{
  int a;
  public:
  demo()
{ 
  a=7;
} 
 demo (demo &z)
{ 
  a=z.a;
}
  int show()
 { 
   cout<<"A="<<a<<endl;
}    
};
   int main()
 {
   demo aa;
   demo bb(aa);
   demo cc=bb;
   aa.show();
   bb.show();
   cc.show();
   return 0;
}       