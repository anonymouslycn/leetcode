#include<bits/stdc++.h>
#include<String.h>
#include<iostream>
using namespace std;




        

int lengthOfLongestSubstring(string s) {
    if( s.length() == 0) return 0;
    map<char,int> map;
    int max_len = 0,pre = -1;
    for(int i = 0;i<s.length();i++)
    {
        map[s[i]] = -1;
    }
    for (int i = 0;i<s.length();i++)
    {
        pre = max(pre,map[s[i]]);
        max_len = max(max_len,i-pre);
        map[s[i]] = i;
        
        for(int i = 0;i<s.length();i++)
        {
           cout<< s[i] <<" "<<map[s[i]]<<" "<<flush;
        }
        cout<<endl;

    }
    return max_len;

}



int main()
{
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
    cout<<"hello";
}