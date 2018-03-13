#include<bits/stdc++.h>
#include<String.h>
#include<vector>
#include<iostream>
using namespace std;
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());  
        sort(nums1.begin(),nums1.end());
        int a = nums1.size()/2;
        if(nums1.size()%2==1)
        {
            return (nums1[a]);
        }
        else {
            return ((nums1[a]+nums1[a-1])/double(2));
        }
        
    }

int main()
{
	int myarray[5] = {1,2};  
	int myarray2[5] = {3,4};
    std::vector<int> v1(myarray , myarray+2);
    std::vector<int> v2(myarray2 , myarray2+2);
    
    cout<<findMedianSortedArrays(v1,v2);
    cout<<"hello";
}