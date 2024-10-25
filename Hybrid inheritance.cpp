//write a program to demonstrate the herirachal inheritance 
#include<iostream>
using namespace std;
class A
{
  public:
  void output()
{
  cout<<"\n class A";
}
};
class B: public A
{ 
  public:
  void output1 ()
{
  cout<<"\n class B";
}
};
  class C
 {
  public: 
  void output2()
{
  cout<<"\n class C";
}
};  
  class D:public B, public C
{ 
  public:
  void output3()
{
  cout<<"\n class D";
}
};      
  int main()
{
  D a;
  a.output ();
  a.output1 ();
  a.output2 ();
  a.output3 ();
  return 0;
 }          