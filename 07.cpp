#include<bits/stdc++.h>
#include<String.h>
#include<iostream>
using namespace std;

int reverse(int x) {
 		long long res = 0;
        while (x != 0) {
            res = 10 * res + x % 10;
            x /= 10;
        }
        return (res < INT_MIN || res > INT_MAX) ? 0 : res;
        
    }

int main()
{
    int s;
    cin>>s;
    cout<<reverse(s)<<endl;
    cout<<"hello";
}