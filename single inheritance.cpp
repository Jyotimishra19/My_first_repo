//write a program to demonstrate the single inheritance 
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
class B:public A
{ 
  int b;
  public:
  void getdata()
{
  cin>>b;
}
  void add()
{
  cout<<"Adress is"<<a+b;
}
};  
  int main()
{
  B x;
  x.input();
  x.getdata();
  x.add();
  return 0;
 }          