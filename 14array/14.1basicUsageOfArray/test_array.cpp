#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   test_array.cpp
 * Time    :   2023/02/27 15:14:28
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   None
*/

int main()
{
    /*手动输入数字，倒序输出*/
    const int n = 5;
    int i;
    int a[n];
    cout<<"请输入"<<n<<"组数字"<<endl;
    for (i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"倒序输出"<<n<<"组数字"<<endl;
    for (i = (n-1); i >= 0; i--)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}
