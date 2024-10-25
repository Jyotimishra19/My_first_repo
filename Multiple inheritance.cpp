//write a program to demonstrate the multiple inheritance 
#include<iostream>
using namespace std;
class A
{
  protected: 
  int a;
  public:
  void input()
{
  cin>>a;
}
};
class B
{ 
  protected:
  int b;
  public:
  void getdata()
{
  cin>>b;
}
};
  class C: public A,public B
 {
  public: 
  void add()
{
  cout<<"Sum="<<a+b;
}
};  
  int main()
{
  C C1;
  C1.input();
  C1.getdata();
  C1.add();
  return 0;
 }          