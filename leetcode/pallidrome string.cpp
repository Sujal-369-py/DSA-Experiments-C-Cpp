#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string str = "v' 5:UxU:5 v'";
    int l =0,r = str.length()-1;
    while(l<r)
    {
         int l = 0, r = str.length() - 1;
        while (l <= r) 
        {
            if(isdigit(str[l]) || isdigit(str[r]))
            {
                if(str[l] != str[r])
                {
                    return false;
                }
                l++;r--;
            }
            // Skip non-alphabetic characters
            if (!isalpha(str[l])) {
                l++;
            }
            else if (!isalpha(str[r])) {
                r--;
            }
            else 
            {
                // Convert to lowercase and compare
                if (tolower(str[l]) != tolower(str[r])) {
                    return false;
                }
                l++;
                r--;
            }
        }
        return true;
    }
}