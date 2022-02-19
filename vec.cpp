/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string>p;
    p={6,"abc"};
    pair<int,string>&p1=p;
    p1.first=3;
    //cout<<p.first<<" "<<p.second<<endl;
    
    pair<int,int> p_array[3];
    p_array[0]= {1,2};
    p_array[1]= {2,3};
    p_array[2]= {3,4};
    
    for(int i =0;i<3;i++)
    {
       // cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    return 0;
}
