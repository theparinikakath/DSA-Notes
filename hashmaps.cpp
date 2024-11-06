#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

//TIME COMPLEXITY OF MAP=O(log n)
//TIME COMPLEXITY OF UNORDERED MAP=O(1)

int main()
{
    //creation
    //unordered_map<string,int> m;
    map<string,int> m;

    //insertion ways
    pair<string,int> p=make_pair("pari",7);
    m.insert(p);
    pair<string,int> q("hello",2);
    m.insert(q);
    m["world"]=1;

    //updation
    m["world"]=5;

    //Searching
    cout<<m["world"]<<endl;
    cout<<m.at("pari")<<endl;
    //unknown key - see output diff

    //cout<<m.at("hi")<<endl;
    cout<<m["hi"]<<endl;
    cout<<m.at("hi")<<endl;

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("bro")<<endl;
    //if element is absent=0
    //if element is present=1

    //erase
    m.erase("hi");
    cout<<m.size()<<endl;

    //
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"--------"<<endl;
    //iterator
    //unordered_map<string,int> ::iterator i=m.begin();
    map<string,int> ::iterator i=m.begin();
    while(i!=m.end())
    {
        cout<<i->first<<" "<<i->second<<endl;
        i++;
    }


    return 0;
}
