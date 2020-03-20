#include<bits/stdc++.h>
using namespace std;
void nlarge(int a[],int b[],int top,int n)
{
  int large,i,j,pos;
  for(i=0;i<n;i++)
  {
    large=a[i];
    pos=i;
    for(j=i+1;j<n;j++)
    {
      if(a[j]>large)
      {
        pos=j;
        large=a[j];
      }
    }
    b[i]=a[pos];
    a[pos]=0;
  }        
}
int main()
{
  int a[100],b[100],n,top,i;
  cout<<"Enter the size of array";
  cin>>n;
  cout<<"Enter the elements of array ";
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<"Enter the number of largest elemnts ";
  cin>>top;
  nlarge(a,b,top,n);
  for(i=0;i<top;i++)
  cout<<b[i]<<endl;
  return 0;
}
  
  