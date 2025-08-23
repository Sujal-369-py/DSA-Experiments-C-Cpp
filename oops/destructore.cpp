#include<iostream>
using namespace std;

class Des 
{
    public: 
    Des()
    {
        cout<<endl<<"Hello man how is going";
    }
    ~Des()
    {
        cout<<endl<<"Object is destroyed";
    }
};

int main()
{
    Des des,des2,des3;
}