#include<iostream>
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

    int insert(string key)
    {
        int value = hashFunction(key);
        int original_val = value;
        int i=0;
        while(Hash[value] != "")
        {
            i++;
            value = (original_val+ i*i)%size;
            if(value == original_val)
            {
                return false;
            }
        }
        Hash[value] = key;
        return true;
    }

    bool search(string key)
    {
        int value = hashFunction(key);
        int original_val = value;
        while(Hash[value] != key)
        {
            value = (value+1)%size;
            if(value == original_val)
            {
                return false;
            }
        }
        return true;
    }
    bool del(string key)
    {
        int value = hashFunction(key);
        int original_val = value;
        while(Hash[value] != "")
        {
            if(Hash[value] == key)
            {
                Hash[value] = "";
                return true;
            }
            value = (value+1)%size;
            if(value == original_val)
            {
                return false;
            }
        }
        return false;
    }
    void display()
    {
        for(int i=0; i<10; i++)
        {
            cout<<"Index "<<i<<" : "<<Hash[i]<<endl;
        }
    }
};
int main()
{
    StaticHashTable ht;
    ht.insert("apple");
    ht.insert("banana");
    ht.insert("mango");
    ht.insert("ana");
    ht.insert("papaya");
    ht.insert("lichi");
    ht.display();
    
}