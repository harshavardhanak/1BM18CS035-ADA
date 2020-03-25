#include<iostream>
using namespace std;
void merge(int *a,int l,int m,int r)
 {
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=r-m;
    int larr[n1],rarr[n2];
    for(i=0;i<n1;i++)
    larr[i]=a[l+i];
    for(j=0;j<n2;j++)
    rarr[j]=a[m+l+j];
    i=0;j=0;k=0;
    while(i<n1 && j<n2)
    {
      if(larr[i]<=rarr[j])
      {
        a[k]=larr[i];
        i++;
      }
      else 
      {
        a[k]=rarr[j];
        j++;
      }
      k++;
    }
    while(i<n1)
    {
      a[k]=larr[i];
      i++;
      k++;
    }
    while(j<n2)
    {
      a[k]=rarr[j];
      j++;
      k++;
    }
 }
void mergesort(int *a,int l,int r)
 {
   if(l<r)
   {
     int m=l+(r-1)/2;
     mergesort(a,l,m);
     mergesort(a,m+1,r);
     merge(a,l,m,r);
   }
 } 
     
int main()
 {
   int n,i;
   cout<<"Enter the size of array: "<<endl;
   cin>>n;
   int a[n];
   cout<<"Enter the elements of array:"<<endl;
   for(i=0;i<n;i++)
   cin>>a[i];
   mergesort(a,0,n-1);
   cout<<"Elements of array after sorting are :";
   for(i=0;i<n;i++)
   cout<<a[i]<<" ";
   return 0;
 }

      