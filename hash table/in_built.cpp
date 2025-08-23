#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};

    unordered_map<string,int> ht;
    
    ht["apple"] = 0;
    ht["banana"] = 1;
    ht["lemon"] = 5;
    
   if(ht.find("lemon") != ht.end())
   {
        ht.erase("lemon");

   }
   else 
   {
    cout<<"not found";
   }
    ht["lemon"] = 9;
   if(ht.find("lemon") != ht.end())
   {
        cout<<"found"<<ht["lemon"];
        
   }
   else 
   {
    cout<<"not found";
   }


}