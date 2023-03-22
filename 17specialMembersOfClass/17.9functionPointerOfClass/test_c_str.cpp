#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;
/**
 * File    :   test_c_str.cpp
 * Time    :   2023/03/21 14:39:38
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   c_str()
*/

int main()
{
    char c[20];
    int i;
    string s = "12";
    strcpy(c,s.c_str());    // strcpy(c,s)将字符串s放在c中
    i = atoi(s.c_str());    // atoi()将字符型转换为整型
    cout<<i<<endl;
    cout<<c<<endl;
    return 0;
}
