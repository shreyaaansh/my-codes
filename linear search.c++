#include<iostream>
using namespace std;

struct array
{
    int A[20];
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
int binaryS(struct array arr,int key)
    {
        int l,mid,h;
        l=0;
        h=arr.length;
        while( l<=h)
        {
            mid=(l+h)/2;
            if(key==arr.A[mid])
            return mid;
            else if(key<arr.A[mid])
            h=mid-1;
            else
            l=mid+1;
        }
        return -1;

    }

int get(struct array arr,int index)
{
    if(index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    else 
    return -1;
}
int main()
{
    struct array arr={{1,2,3,4,5},10,5};
    cout<<binaryS(arr,9   );
    display(arr);
    return 0;
}

void set(struct array *arr,int index,int x)
{
    if(index>=0 && index<arr->length)
    arr->A[index]=x;
} 

int max(struct array arr)
{
    int max= arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        max=arr.A[i];
    }
    return max;
}

int min(struct array arr)
{
    int min= arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        min=arr.A[i];
    }
    return min;
}

int sum(struct array arr)
{
    int s=0;
    for(int i=0;i<arr.length;i++)
    {
        s+=arr.A[i];
        return s;
    }
}

float avg(struct array arr)
{
    return (float)sum(arr)/arr.length;
}