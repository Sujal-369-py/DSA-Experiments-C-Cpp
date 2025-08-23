#include<iostream>
using namespace std;

void print_n_to_1(int n)
{
    if(n == 0) return;
    cout << "Entering: print_n_to_1(" << n << ")" << endl;
    cout << n << endl;
    print_n_to_1(n-1);
    cout << "Returning from: print_n_to_1(" << n << ")" << endl;
}

int main()
{
    print_n_to_1(10);
}