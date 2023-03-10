#include <iostream>
#include <string>
using namespace std;
/*
File    :   demo.cpp
Time    :   2023/02/23 19:07:36
Author  :   Guiguxinan 
Version :   1.0
Desc    :   None
*/

int main()
{
   /*
   静态联编：
    因此在未加virtual说明时,该函数是静态联编,即被调函数和调用函数的关系以及它们的
    内存地址在编译时都已经确立好,运行时不再发生变化。这样的好处是速度快,因为运行的时
    候不用对各个对象的函数进行追踪,只需要传递参数、执行确定好的函数并在函数调用完毕后清理内存即可
   动态联编：可实现继承多态性
    将基类函数说明为虚函数，virtual后被调函数和调用者之间的内存地址是不确定的
*/
   return 0;
}
