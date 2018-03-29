#include<bits/stdc++.h>
#include<String.h>
#include<iostream>
using namespace std;


int romanToInt(string s) {
    int result=0;
    const char* p=s.c_str();
    int count=0;
    
    //千位
    while(*p!='\0'&&*p=='M'){
        p++;//千位循环结束后p指向百位。
        count++;
    }
    result+=1000*count;
    count=0;
    
    //百位
    if(*p=='C'){
        while(*p!='\0'&&*p=='C'){
            p++;
            count++;
        }
        if(count==1&&*p=='M'){
            p++;
            count=9;
        }
        else if(count==1&&*p=='D'){
            p++;
            count=4;
        }
    }else if(*p=='D') {
        p++;
        count=5;
        while(*p!='\0'&&*p=='C'){
            p++;
            count++;
        }

    }else{
        count=0;
    }
    result+=count*100;
    count=0;
    
    
    //十位
    if(*p=='X'){
        while(*p!='\0'&&*p=='X'){
            p++;
            count++;
        }
        if(count==1&&*p=='C'){
            p++;
            count=9;
        }
        else if(count==1&&*p=='L'){
            p++;
            count=4;
        }
    }else if(*p=='L') {
        p++;
        count=5;
        while(*p!='\0'&&*p=='X'){
            p++;
            count++;
        }
        
    }else{
        count=0;
    }
    result+=count*10;
    count=0;
    
    
    //个位
    if(*p=='I'){
        while(*p!='\0'&&*p=='I'){
            p++;
            count++;
        }
        if(count==1&&*p=='X'){
            p++;
            count=9;
        }
        else if(count==1&&*p=='V'){
            p++;
            count=4;
        }
    }else if(*p=='V') {
        p++;
        count=5;
        while(*p!='\0'&&*p=='I'){
            p++;
            count++;
        }
        
    }else{
        count=0;
    }
    result+=count;
    
    return result;
}


int main()
{
    string s;
    cin>>s;
    cout<<romanToInt(s)<<endl;
    cout<<"hello";
}
