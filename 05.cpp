#include<bits/stdc++.h>
#include<String.h>
#include<iostream>
using namespace std;


string lengthOfLongestSubstring(string s) {
    if( s.length() == 1) return s;
    int maxLen = 0,curLen = 0,sbegin,len=s.length();
    string res="";
    for (int i = 0;i<len ;++i)
    {
    	int left  = i-1,right = i+1;
    	while (left >= 0 && right<len && s[left] == s[right])
    	{
    		curLen = right - left;
    		if(curLen>maxLen)
    		{
    			maxLen = curLen;
    			sbegin = left;
    		}
    		left--,right++;
    	}
    }
    for (int i = 0;i<len ;++i)
    {
    	int left  = i,right = i+1;
    	while (left >= 0 && right<len && s[left] == s[right])
    	{
    		curLen = right - left;
    		if(curLen>maxLen)
    		{
    			maxLen = curLen;
    			sbegin = left;
    		}
    		left--,right++;
    	}
    }
    res = s.substr(sbegin,maxLen+1);
    return res;

    

}


int main()
{
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
    cout<<"hello";
}