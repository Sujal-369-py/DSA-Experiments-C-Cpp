#include<iostream>
using namespace std;

void print_n_to_1(int n)
{
    if(n == 1) 
    {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    print_n_to_1(n-1);
}

// int print_1_to_n(int n)
// {
//     if(n == 1) return 1;
//     cout<<n<<" ";
//     print_n_to_1(n-1);
// }

int main()
{
    print_n_to_1(10);
}