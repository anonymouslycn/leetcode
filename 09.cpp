#include<bits/stdc++.h>
#include<String.h>
#include<iostream>
using namespace std;


bool isMatch(string s, string p) {
        if (p.empty())    return s.empty();

        if ('*' == p[1])
            // x* matches empty string or at least one character: x* -> xx*
            // *s is to ensure s is non-empty
            return (isMatch(s, p.substr(2)) || !s.empty() && (s[0] == p[0] || '.' == p[0]) && isMatch(s.substr(1), p));
        else
            return !s.empty() && (s[0] == p[0] || '.' == p[0]) && isMatch(s.substr(1), p.substr(1));
}


int main()
{
    string s,p;
    cin>>s;
    cout<<"input p"<<endl;
    cin>>p;
    cout<<isMatch(s,p)<<endl;
    cout<<"hello";
}
