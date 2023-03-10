#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo.cpp
 * Time    :   2023/02/23 20:46:41
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   None
*/

int main()
{
    /*一般情况下任何类的析构函数都可声明为虚析构函数,当指针被删除时,系统会获得对象
运行时的类型并调用正确的析构函数。但是我们要注意3点:
(1)由于析构函数不允许有参数,因此它不可能实现重载,那么一个类就只能有一个虚析构函数。
(2)只要基类的析构函数被说明为虚函数,则派生类的析构函数无论说明与否,都自然成为虚函数。
(3)在C++中虚构造函数是不存在的,因此也无法声明。
*/
    return 0;
}
