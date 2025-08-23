#include<iostream>
using namespace std;

int hybrid(int val,int **pre){
    int a = 1;
    static int c = 369;
    static int d = 999;
    if(val == a){
        if(pre) *pre = &c;
        return 0;
    }
    else{
        if(pre) *pre = &d;
        return 1;
    }
    
}

int main(){
    int val = 2;
    int *d;
    cout<<int(d)<<endl;
    hybrid(val,&d);
    cout<<int(*d)<<endl;
    cout<<int(d)<<endl;
    int res = hybrid(val,0);
    cout<<res<<endl;
}