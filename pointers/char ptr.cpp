#include<iostream>
using namespace std;

int main()
{
    char *str = new char[5];
    *(str + 0) = 'h';
    *(str + 1) = 'e';
    *(str + 2) = 'l';
    *(str + 3) = 'l';
    *(str + 4) = '0';
    for(int i=0; i<6; i++)
    {
        cout<<*(str + i)<<endl;
        cout<<int((str + i))<<endl;
    }

    delete [] str;
}