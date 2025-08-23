#include<iostream>
#include<string>
using namespace std;

class Stack 
{
    private: 
    int index = -1;
    char *stack;
    public: 
    Stack(int size)
    {
        stack = new char[size];
    }
    ~Stack()
    {
        delete[] stack;
    }
    void push(char bracket)
    {
        stack[++index] = bracket;
    }
    int pop(char bracket)
    {
        if(index == -1)
        {
            return -1;
        }
        if((stack[index] == '(' && bracket == ')')||
            (stack[index] == '[' && bracket == ']')||
            (stack[index] == '{' && bracket == '}'))
            {
                --index;
                return 0;
            }
            return -1;
    }
    int traverse()
    {
        if(index == -1)
        {
            return 0;
        }
        return -1;
    }
};

int main()
{
    string str = "([]()";
    int leng = str.length();
    Stack stack(leng);
    
    for(int i=0; str[i]; i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            stack.push(str[i]);
        }
        else 
        {
            int call = stack.pop(str[i]);
            if(call == -1)
            {
                cout<<"Does not match";
                return -1;
            }
        }
    }
    if(stack.traverse() == -1)
    {
        cout<<"Does not match";
        return -1;
    }
    cout<<"Matched";
}