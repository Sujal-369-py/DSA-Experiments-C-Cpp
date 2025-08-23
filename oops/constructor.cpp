#include<iostream>
using namespace std;

class rec 
{
    public: 
    rec(int &len,int &bre)
    {
        len = 1;
        bre = 2;
    }
    void change(int &len,int &bre)
    {
        len = 3;
        bre = 4;
        cout<<endl<<"inside change "<<len<<"  "<<bre;
    }
    void res(int len,int bre)
    {
        cout<<"Inside clas   "<<len<<"   "<<bre<<endl;
        cout<<"result : "<<len*bre;
    }
};

int main()
{
    int l,b;
    rec obj1(l,b);
    cout<<endl<<"before change : "<<l<<"   "<<b<<endl;
    obj1.change(l,b);
    cout<<endl<<"Inside main : "<<l<<"   "<<b<<endl;
    obj1.res(l,b);
}