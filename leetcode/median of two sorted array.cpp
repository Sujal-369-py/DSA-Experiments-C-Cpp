#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    vector<int> nums1 = {2,2,4,4};
    vector<int> nums2 = {2,2,2,4,4};
     double total=0;
        for(int i=0; i<nums1.size(); i++)
        {
            total+=nums1[i];
        }
        for(int i=0; i<nums2.size(); i++)
        {
            total+=nums2[i];
        }
       double median = total/(nums1.size()+nums2.size());
       double ans = median - floor(median);
       if(ans == 0.5) cout<<median;
       else cout<<median - ans;
}