#include<iostream>
#include"../MyLibrary/stacklib.h"
using namespace std;

int main()
{
    Stack st;
    st.isempty();
    st.push(10);
    st.isempty();
    st.push(20);
    st.pop();
    st.peek();
}