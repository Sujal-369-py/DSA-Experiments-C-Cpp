#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> name = {"sujal","anjali","raju","shweta"};
    for(auto &word:name)
    {
        for(auto &ch:word)
        {
            cout<<ch<<" ";
        }

    }

    // vector<char> name = {'h','e','l','o'};
    // for(auto coutt:name)
    // {
    //     cout<<coutt;
    // }
}