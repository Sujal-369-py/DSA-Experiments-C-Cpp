#include<iostream>
#include<string>
using namespace std;

void doit(int i,string name)
{
    if(i >= 1)
    {
        cout<<"Helllo "<<name<<endl;
        doit(i-1,name);
    }
}

int main()
{
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    doit(5,name);
}