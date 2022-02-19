/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> vec1 ;
    int size,element;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the elemets of vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);

    return 0;
}
