#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   charTypeString02.cpp
 * Time    :   2023/03/21 15:38:41
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   char型字符遇到空格后结束的解决方法，cin.get(字符对象,长度)
*/

int main()
{
    char s[10];
    cout<<"请输入字符串：";
    cin.get(s,10);
    cout<<s<<endl;
    return 0;
}
