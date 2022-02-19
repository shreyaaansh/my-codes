#include <iostream>
#include<map>

using namespace std;

int main()
{
    map<string,int> marks;
    marks["raj"]=24;
    marks["ansh"]=67;
    marks["aman"]=34;
    marks["rohan"]=90;
    map<string,int> :: iterator itr;
    
    marks.insert({{"naman",69},{"abhisek",45}});
    for(itr=marks.begin();itr!=marks.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    
    
    cout<<"the size of map is: "<<marks.size();
    return 0;
}
