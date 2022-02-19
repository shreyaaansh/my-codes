#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    list <int> li;
    li.push_back(6);
    li.push_back(5);
    li.push_back(0);
    li.push_back(1);
    li.push_back(12);
    li.sort();
    //li.pop_front();
    //li.remove(0);
    //li,pop_back();
    display(li);
    cout<<endl;
    list<int> list2(3);
    list <int> :: iterator iter;
    iter= list2.begin();
    *iter=2;
    iter++;
    *iter=5;
    iter++;
    *iter=9;
    iter++;
    display(list2);
    cout<<"\nlist after merging"<<endl;
    li.merge(list2);
    display(li);
    
    cout<<"\nlist after reversing"<<endl;
    li.reverse();
    display(li);
    

    return 0;
}
