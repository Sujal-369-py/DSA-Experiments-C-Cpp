#include<iostream>
using namespace std;

int main()
{
    double num = 0.00;
    int pow = 0;
    double number = num;
        double  original_num = num;
        int end = abs(pow);

        for(int i=1; i<end; i++)
        {
            if(pow < 0)
            {
                number = (number * original_num);
                if(pow <= -20)
                {
                    cout<<"0.0000";
                    return 0.0000;
                }
                
            }
            else if(pow == 0)
            {
                return 1;
            }
            else 
            {
                number*=original_num;
            }
        }
        if(pow < 0)
        {
            cout<<1/number;
            return 1/number;
        }
        cout<<number;
        return number;
}