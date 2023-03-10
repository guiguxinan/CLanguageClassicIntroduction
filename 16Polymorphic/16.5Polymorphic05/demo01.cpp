#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo01.cpp
 * Time    :   2023/03/06 14:27:13
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   多个子基类共享一个父基类
*/

int main()
{
    /*多层继承的两义性：
    一个基类a派生两个类b,c，两个派生类再派生另一个类d
    d类分别继承b，c类，b,c又从a类派生，所以d类实际继承了两次b,c类的公有基类a。
    结果就是每次执行程序a类的构造函数和析构函数都会执行2次
    */
    return 0;
}
