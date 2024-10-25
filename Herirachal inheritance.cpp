//write a program to demonstrate the herirachal inheritance 
#include<iostream>
using namespace std;
class A
{
  public:
  void getdata()
{
  cout<<"\n class A";
}
};
class B: public A
{ 
  public:
  void input()
{
  cout<<"\n class B";
}
};
  class C: public A
 {
  public: 
  void display()
{
  cout<<"\n class C";
}
};  
  int main()
{
  B aa;
  C bb;
  aa.input();
  aa.getdata();
  bb.display();
  bb.getdata();
  return 0;
 }          