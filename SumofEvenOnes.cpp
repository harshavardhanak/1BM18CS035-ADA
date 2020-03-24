#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i=0,j,b,k=0,key,sum=0;
  cout<<"Enter the size of array : "<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter the elements of array :"<<endl;
  for(i=0;i<n;i++)
  cin>>a[i];
  for(i=0;i<n;i++)
  {
    key=a[i];
    while(key>0)
    {
       b=key%2;
       if(b==1)
       {
          k++; 
       }
       key=key/2;
    }
    if(k%2==0)
    {
      sum=sum+a[i];
    }
    k=0;
  }
  cout<<"Elements of array :"<<endl;
  cout<<sum;
  return 0;
}