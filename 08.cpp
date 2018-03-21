#include<bits/stdc++.h>
#include<String.h>
#include<iostream>
using namespace std;

std::string& trim(std::string &);  

int myAtoi(string str) {
    if (str == "" || str.size() < 1)
		return 0;
 
	// trim white spaces
	str = trim(str);
 
	char flag = '+';
 
	// check negative or positive
	int i = 0;
	if (str[0] == '-') {
		flag = '-';
		i++;
	} else if (str[0] == '+') {
		i++;
	}
	// use double to store result
	double result = 0;
 
	// calculate value
	while (str.size() > i && str[i] >= '0' && str[i] <= '9') {
		result = result * 10 + (str[i] - '0');
		i++;
	}
 
	if (flag == '-')
		result = -result;
 
	// handle max and min
	if (result > INT_MAX)
		return INT_MAX;
 
	if (result < INT_MIN)
		return INT_MIN;
 
	return (int) result;

}

std::string& trim(std::string &s)   
{  
    if (s.empty())   
    {  
        return s;  
    }  
  
    s.erase(0,s.find_first_not_of(" "));  
    s.erase(s.find_last_not_of(" ") + 1);  
    return s;  
}  

int main()
{
    string s;
    cin>>s;
    cout<<myAtoi(s)<<endl;
    cout<<"hello";
}
