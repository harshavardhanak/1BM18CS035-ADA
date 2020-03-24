#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,n,k;
   cout<<"Enter the size of adjacency matrix :";
   cin>>n;
   int a[n][n],b[n][n];
   cout<<"Enter elements of matrix :":
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
         cin>>a[i][j];
     }
   }
   for(k=0;k<n;k++)
   {
      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
             if(a[i][j]>a[i][k]+a[k][j])
             {
                a[i][j]=a[i][k]+a[k][j];
             }
          }
       }
   }  
   cout<<"Shortest distance matrix ";
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
         if(a[i][j]==INF)
         cout<<"INF"<<" ";
         else 
         cout<<a[i][j];
     }
   }
   return 0;
}
     