#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    stack<char> st;
    string s = "{([])}";

    for(auto &i:s)
    {
        if(i == '(' || i == '[' || i == '{') st.push(i);
        else 
        {
            if(st.empty())
            {
                cout<<"not";
                return false;
            }
            else if((st.top() == '(' && i == ')') ||
                (st.top() == '[' && i == ']') ||
                (st.top() == '{' && i == '}'))
            {
                st.pop();
            }
        }
    }
    if(st.empty())
    {
        cout<<"Match";
        return true;
    }
    else 
    {
        cout<<"not";
        return false;
    }
}