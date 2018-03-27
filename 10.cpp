#include<bits/stdc++.h>
#include<String.h>
#include<iostream>
using namespace std;


int maxArea(vector<int> &h) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int res=0;
        int n = h.size();
        int l=0,r=n-1;
        while(l<r)
        {
            res=max(res,min(h[l],h[r])*(r-l));
            if (h[l]<h[r])
            {
                int k=l;
                while(k<r&&h[k]<=h[l])
                    k++;
                l=k;
                }
            else
            {
                int k=r;
                while(k>l&&h[k]<=h[r])
                    k--;
                r=k;
             }
        }
        return res;
    }

int main()
{
    // string s,p;
    // cin>>s;
    // cout<<"input p"<<endl;
    // cin>>p;
    // cout<<isMatch(s,p)<<endl;
    // cout<<"hello";
}
