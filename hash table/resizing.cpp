#include<iostream>
using namespace std;

class HashTable
{
    private: 
    string *Hash;
    int count = 0,capacity;
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
    int resize()
    {
        int size2 = capacity + capacity;
        string *Hash2 = new string[size2]();
        for(int i=0; i<capacity; i++)
        {
            Hash2[i] = Hash[i];
        }
        capacity = size2;
        delete[] Hash;
        Hash = Hash2;
    }

    bool insert(const string &key)
    {
        int value = hashing(key);
        int original_value = value;
        int i=0;
        float load_factor = (float)count/capacity;
        cout<<load_factor<<"-------"<<count<<endl;
        if(load_factor >= 0.7)
        {
            resize();
        }
        while(Hash[value] != "")
        {
            i++;
            value = (value + i*i)%capacity;
            if(value == original_value)
            {
                cout<<"table is completly full----------"<<key<<endl;
                return false;
            }
        }
        cout<<"inserted : "<<key<<endl;
        Hash[value] = key;
        count++;
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
    HashTable ht(11);
    ht.insert("apple");
    ht.insert("banana");
    ht.insert("mango");
    ht.insert("ana");
    ht.insert("papaya");
    ht.insert("lichi");
    ht.insert("avacado");
    ht.insert("strawberry");
    ht.insert("rainbow");
    ht.display();
    
}