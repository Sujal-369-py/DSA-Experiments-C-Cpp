#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
     unordered_map<int,int> ht;
     int n = 2;
        int r,sum=0;
       while (ht.find(n) == ht.end()) {
            ht[n]++;
            if (n == 1 || n % 10 == 0) {
                return true;
            }

            if (n < 10) {
                n *= n;
            } else {
                sum = 0;
                while (n > 0) {
                    r = n % 10;
                    sum += r * r;
                    n /= 10;
                }
                n = sum;  // Only set n = sum here
            }
        }
        return false;
}
