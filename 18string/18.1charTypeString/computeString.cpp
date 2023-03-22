#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/**
 * File    :   computeString.cpp
 * Time    :   2023/03/21 15:53:37
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   计算字符串的长度和大小
*/

int main()
{
    char a[] = {"abcdefg hjklm"};
    cout<<"字符串a:"<<a<<endl;
    cout<<"字符串a的长度为:"<<strlen(a)<<endl;  // 返回字符串长度
    cout<<"字符串a的大小为:"<<sizeof(a)<<endl;  // sizeof返回数组长度，算上"\0"
    return 0;
}
