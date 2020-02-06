#include<stdio.h>
#include<stdlib.h>
int main()
 {
   int a[100],n,ele,res;
   printf("Enter the size and elements of array ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   res=count(a,n,ele);
   printf("Count = %d",res);
   return 0;
 }
int count(int a[],int n,int res)
 {
   int b,e,m,r=0;
   b=0;
   e=n-1;
   m=(b+e)/2;
   if(a[m]==ele)
     r++;
   else if(ele>a[m])
     b=m+1;
   else if(ele<a[m])
     e=mid-1;
    
    
