#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo.cpp
 * Time    :   2023/02/23 20:15:34
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   调用虚函数的方式
*/

int main()
{
    /**
     * 1.用指针调用动态的调用对象的成员函数时，该成员函数必须声明为虚函数，此函数才具有继承的多态性
     * 2.在继承中,只有当使用指针或者引用的方式来调用虚函数时,虚函数才能发挥多态性的作用。
     * 3.只有被说明为虚函数的那个成员函数才具有多态性。
     * 4.被继承的虚函数仍然是虚函数。

    */
    return 0;
}
