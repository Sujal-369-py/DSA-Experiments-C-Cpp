#include<iostream>
using namespace std;

class HashTable
{
    private: 
    string *Hash;
    int count,capacity;
    public: 
    HashTable(int size)
    {
        Hash = new string[size]();
        capacity = size;
    }
    ~HashTable()
    {
        delete []Hash;
    }

    int hashing(const string &key)
    {
        int res=0;
        for(int i=0; key[i]; i++)
        {
            int c = key[i];
            res+=c;
        }
        return res%10;
    }

    bool insert(const string &key)
    {
        int value = hashing(key);
        int original_value = value;
        int i=0;
        while(Hash[value] != "")
        {
            i++;
            value = (value + i*i)%capacity;
            if(value == original_value)
            {
                cout<<"table is completly full";
                return false;
            }
        }
        cout<<"inserted : "<<key<<endl;
        Hash[value] = key;
        return true;
    }

    bool search(const string &key)
    {
        int value = hashing(key);
        int original_value = value;
        int i=0;
        while(Hash[value] != "")
        {
            if(Hash[value] == key)
            {
                cout<<"found"<<endl;
                return true;
            }
            i++;
            value = (value + i*i)%capacity;
            if(i == capacity)
            {
                cout<<"Not found"<<endl;
                return false;
            }
        }
        cout<<"Not found"<<endl;
        return false;
    }

    bool del(const string &key)
    {
        int value = hashing(key);
        int original_value = value;
        int i=0;
        while(Hash[value] != "")
        {
            if(Hash[value] == key)
            {
                Hash[value] = "Deleted";
                return true;
            }
            i++;
            value = (value + i*i)%capacity;
            if(value == original_value)
            {
                return false;
            }
        }
        
    }

  void display()
{
    for(int i = 0; i < capacity; i++)
    {
        cout<<"Index "<<i<<" : "<<Hash[i]<<endl;
    }
}

};

int main()
{
    HashTable ht(10);
    ht.insert("apple");
    ht.insert("banana");
    ht.insert("mango");
    ht.insert("ana");
    ht.insert("papaya");
    ht.insert("lichi");
    ht.search("apple");
    ht.search("kk");
    ht.search("lll");
    ht.del("papaya");
    ht.search("papaya");
    ht.display();
    
}