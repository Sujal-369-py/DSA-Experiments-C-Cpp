#include<iostream>
#include<string>

using namespace std;

int main()
{
    string hay = "sadbutsad",need = "sad";
    int i,j=0,track=-1,real=-1;
        for(i=0;i<hay.length(); i++)
        {
            if(hay[i] == need[j]) 
            {
                track = i;
            }
            else if(j == need.length())
            {
                return track-(need.length()-1);
            } 
            else
            { 
                j = -1; track =-1;
            }
            j++;
        }
        return track;
}