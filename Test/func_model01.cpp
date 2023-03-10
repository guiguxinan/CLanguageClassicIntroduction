#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   func_model01.cpp
 * Time    :   2023/03/09 23:26:50
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   函数模板
*/
/*定义求绝对值的函数模板并进行调用*/
template <typename T>
T abs(T x){
    return x<0?-x:x;
}
int main()
{
    int n = -5;
    int m = 10;
    double d = -5;
    float f = 3.2;
    cout<<n<<"的绝对值为："<<abs(n)<<endl;
    cout<<m<<"的绝对值为："<<abs(m)<<endl;
    cout<<d<<"的绝对值为："<<abs(d)<<endl;
    cout<<f<<"的绝对值为："<<abs(f)<<endl;

    return 0;
}
