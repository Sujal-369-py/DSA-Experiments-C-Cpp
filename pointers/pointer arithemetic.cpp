#include<iostream>
using namespace std;

int main()
{
    int *arr = new int[3];
    char *ar = new char[3];

    cout<<int(arr);
    cout<<endl<<int(++arr);

    cout<<endl<<int(ar);
    cout<<endl<<int(++ar);

    *(arr + 0) = 3;
    *(arr + 1) = 6;
    cout<<endl<<*(arr+0);
    cout<<endl<<*(arr + 1);


}