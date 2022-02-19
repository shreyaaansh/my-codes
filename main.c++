/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct array 
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    cout<<"elements are\n";
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<endl;
    
}

int deletee(struct array *arr,int index)
{
    int x=0;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x; 
    }
    return 0;   
}
int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    deletee(&arr,0);
    display(arr);
    

    return 0;
}
