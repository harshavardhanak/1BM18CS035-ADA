#include<iostream>
using namespace std;
void arrange(int a[],int b[],int n);
void meeting(int a[],int b[],int n);
int main()
{
    int a[10],b[10],n,i;
    cout<<"Enter the size of arrays :";
    cin>>n;
    cout<<"Enter the elements of 1st array :";
    for(i=0;i<n;i++)
    {
       cin>>a[i];
    }
    cout<<"Enter the elements of 2nd array :";
    for(i=0;i<n;i++)
    {
       cin>>b[i];
    }
    cout<<"Elements of array before sorting  :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
        cout<<b[i]<<"\t";
    }
    cout<<endl;
    arrange(a,b,n);
    meeting(a,b,n);
    return 0;
}
void arrange(int a[],int b[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
    }
}
void meeting(int a[],int b[],int n)
{
    int i,k=1,prev;
    cout<<a[0]<<"\t";
    cout<<b[0]<<"\t";
    for(i=1;i<n;i++)
    {
        if(prev<=a[i])
        {
            cout<<a[i]<<"\t";
            cout<<b[i]<<"\t";
            prev=b[i];
            k++;
        }
    }
    cout<<endl<<"Total number of meeting are "<<k<<endl;
}