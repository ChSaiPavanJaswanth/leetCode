#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maximum=0;
        // for(int i=0; i<height.size(); i++)
        // {
        //     for(int j=i+1; j<height.size(); j++)
        //     {
        //         maximum = max(maximum , (j-i)*min(height[j],height[i]));
        //     }
        // }
        // return maximum;
        int i=0;
        int j=height.size()-1;
        int maximum = 0;
        while(j>i)
        {
            if(height[i] > height[j])
            {
                maximum = max(maximum , (j-i)*height[j]);
                j--;
            }
            else{
                maximum = max(maximum , (j-i)*(height[i]));
                i++;
            }
        }
        return maximum;
    }
};