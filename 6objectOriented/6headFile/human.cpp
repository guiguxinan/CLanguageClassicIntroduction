#include <iostream>
#include "hunman00.hpp"

using namespace std;

int main()
{   
    /*
    将类声明和定义部分保存在头文件中
    */
    A a;
    a.setNum(2, 4);
    a.print();
    return 0;
}
