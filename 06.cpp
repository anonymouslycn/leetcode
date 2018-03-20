#include<bits/stdc++.h>
#include<String.h>
#include<iostream>
using namespace std;



string convert(string s, int numRows) {
        int size = static_cast<int>(s.size());
        // 当行数小于等于1 或 大于原串的size时不用转换
        if (numRows <= 1 || numRows >= size) {
            return s;
        }
        
        // 字符串数组, 装的是行的对应的字符串
        vector <string> rowString(numRows);
        int rowNum = 1;
        // 向下读还是向上读的标志
        int flag = 1;
        for (int i = 0; i < size; ++i) {
            rowString[rowNum-1] += s[i];
            if (rowNum == numRows){
                flag = -1;
            }
            if (rowNum == 1) {
                flag = 1;
            }
            rowNum += flag;
        }
        
        string result;
        for (int i = 0; i < numRows; ++i) {
            result += rowString[i];
        }
        return result;
  
}



int main()
{
    string s;
    cin>>s;
    cout<<convert(s,3);
    cout<<"hello";
}