#include<iostream>
using namespace std;
int factorial(int n);
int main()
 {
   int f,n;
   cout<<"Enter the number ";
   cin>>n;
   f=factorial(n);
   cout<<"Factorial of a given number is ";
   cout<<f<<endl;
  }
 int factorial(int n)
  {
    if(n==0)
    return 1;
    else 
    return n*factorial(n-1);
  }
