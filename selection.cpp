#include<iostream>
using namespace std;
int main()
 {
    int a[100],n,small,b[100],temp,i,j;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the element's of array";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
       small=i;
       for(j=i+1;j<n;j++)
       {
          if(small<a[j])
          {
             small=j;
          }
       }
       temp=a[small];
       a[small]=a[i];
       a[i]=temp;
    }
    cout<<"Elements of array";
    for(i=0;i<n;i++)
    cout<<a[i];
    return 0;
 }
                 
        
