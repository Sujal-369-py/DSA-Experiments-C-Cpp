#include<iostream>
#include<string>
using namespace std;

class StaticHashTable 
{
    private: 
    const int size = 10;
    string Hash[10] = {""};
    public:
    int hashFunction(string key)
    {
        int hash = 0;
        for(int i=0; i<key.length(); i++)
        {
            int c = key[i];
            hash+=c;
        }
        return hash%10;
    }
    bool insert(string key)
    {
        int value = hashFunction(key);
        int original_value = value;

        while(Hash[value] != "")
        {
            value = (value+1)%size;
            if(value == original_value)
            {
                return false;
            }
        }
        Hash[value] = key;
        return true;
    }
    void display()
    {
        for(int i=0; i<10; i++)
        {
            cout<<"Index "<<i<<" : "<<Hash[i]<<endl;
        }
    }

    int delete_(string key)
    {
        int value = hashFunction(key);
        while(Hash[value] != key)
        {
            value = (value +1)%size;
        }
        Hash[value] = "";
    }
};

int main()
{
    StaticHashTable ht;
    ht.insert("apple");
    ht.insert("pineapple");
    ht.insert("banana");
    ht.insert("mango");

    ht.display();
   
    return 0;
}