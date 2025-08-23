#include<iostream>
using namespace std;

class rec 
{
    public: 
    void insert(int &len,int &bre)
    {
        cout<<"Enter length and breadth : ";
        cin>>len>>bre;
    }
    void res(int len,int bre)
    {
        cout<<len<<bre;
        cout<<"result : "<<len*bre;
    }
};

int main()
{
    int l,b,tep;
    rec obj1;
    obj1.insert(l,b);
    cout<<endl<<l<<" "<<b;
    obj1.res(l,b);
}