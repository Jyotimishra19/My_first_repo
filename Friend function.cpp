//"Write a program in C++ to perform addition of two numbers using a friend function."

//Input:{5,10}
//output:{15}

#include<iostream>
using namespace std;
  class addition
{
   int a,b;
   public:
   void getdata();
   friend int sum(addition aa);
};
   void addition:: getdata()
{ 
   cin>>a>>b;
}
   int sum (addition aa)
 {
   return(aa.a+aa.b);
 }
   int main()
 {
   addition aa;
   aa.getdata();            
   cout << "Addition is" <<sum(aa);
    return 0;
}