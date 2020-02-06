#include<stdio.h>
#include<stdlib.h>
void gcd(int a,int b);
int main()
  {
    int a,b;
    printf("Enter the two numbers ");
    scanf("%d %d",&a,&b);
    gcd(a,b);
    return 0;
  }
void gcd(int a,int b)
  {
      int rem;
      rem=a%b;
      if(rem==0)
      printf("GCD of numbers is :%d",b);
      else 
      gcd(b,a%b);
    
  }
     
