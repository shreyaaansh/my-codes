/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;

class matrix
{
    public:
    int a[10];
    int n;
};
void set(matrix *m,int i,int j,int x)
{
    if(i==j)
     m->a[i-1]=x;
}
int Get(matrix m,int i,int j)
{
    if(i==j)
     return m.a[i-1];
    else
     return 0;
}
void display(matrix m)
{
    int i,j;
    for(i=0;i<m.n;i++)
    {
        for(j=0;j<m.n;j++)
        {
            if(i==j)
            cout<<m.a[i]<<" ";
            else
            cout<<"0 ";
        }
        cout<<"\n";

    }
}
int main()
{
    matrix m;
    m.n=5;
    set(&m,1,1,4);
    set(&m,2,2,6);
    set(&m,3,3,8);
    set(&m,4,4,1);
    display(m);

    return 0;
}
