#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   subOutOfRange.cpp
 * Time    :   2023/02/24 16:53:26
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   None
*/

int main()
{
    /*数组下标越界*/
    // int a[5];
    // for (int i = 0; i <= 7; i++)
    // {
    //     a[i] = i;
    //     // cout<<a[i]<<endl;
    // }
    // for (int i = 0; i <= 8; i++){
    //     cout<<a[i]<<endl;
    // }
    /* 数组倒序输出*/
    /*下标定义为常量*/
    int a[5];
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
    }
    for (int i = (n-1); i >= 0;i--)
    {
        cout<<a[i]<<endl;
    }
    
    
    
    return 0;
}
