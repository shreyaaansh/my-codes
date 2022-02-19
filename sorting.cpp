/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubble(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[i]<a[j])
            {
                swap(a[i],a[j]);
            }
            
        }
    }
}

void insertion(int a[],int n)
{
    int i,x,j;
    for(i=0;i<n;i++)
    {
        j=i-1;
        x=a[i];
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x; 
    }
}

void selection(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            k=j;
        }
        swap(a[i],a[k]);
    }
}
int main()
{
    int a[]={2,3,4,7,6,4,9,12,0};
    int n=9;
    selection(a,9);
    for(int i=0;i<9;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
