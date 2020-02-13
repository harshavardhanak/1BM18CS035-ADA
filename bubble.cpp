#include<iostream>
#include<ctime>
using namespace std;
void bubble(int a[],int n)
 {
   int i,j,temp;
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
       if(a[j]>a[j+1])
        { 
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }
   }
 }
int main()
 {
    int a[1000],n=100,i;
    //cout<<"Enter the size of array:\n";
   // cin>>n;
    //cout<<"Enter the elements of array:\n";
    for(i=0;i<n;i++)
    {
      //cin>>a[i];
      a[i]= rand()%n;
      
    }
    const clock_t begin_time=clock();
    bubble(a,n);
    cout<<(float(clock()-begin_time)/CLOCKS_PER_SEC)<<"ms";
    cout<<"\nElements of array:\n";
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<"\t";
    }
    
    return 0; }
