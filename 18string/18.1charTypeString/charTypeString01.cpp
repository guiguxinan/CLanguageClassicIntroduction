#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   charTypeString01.cpp
 * Time    :   2023/03/21 15:33:33
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   char类型字符串
*/

int main()
{
    // char型字符串以\0结尾
    char s1[4] = {'a','b','c','\0'};
    char s2[10]; //定义一个长度为12个字符的字符s2
    cin>>s2;    //hello c++
    cout<<s2<<endl; //hello 遇到空格后直接结束
    return 0;
}
