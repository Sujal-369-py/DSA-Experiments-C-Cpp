#include<iostream>
#include<string>
using namespace std;

class Convert
{
    private:
    char *stack,*arr;
    public:

    Convert(int size)
    {
        stack = new char[size];
        arr = new char[size];
    }

    int check(string str)
    {
        for(int i=1; str[i]; i+=2)
        {
            if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^')
            {
                continue;
            }
            return -1;
        }
    return 0;
    }


};

int main()
{
    string str = "aa+b-c*y";
    
    
}