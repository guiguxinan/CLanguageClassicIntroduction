#include <iostream>

using namespace std;

int main()
{
   // 常量：声明的常量值不能改变，对常量进行初始化后不能对其进行赋值
   // 常量可为字符型，整型
   const a = 1;
   a = 0;
//    cout<<a;
   /*
   打印结果：
   constent01.cpp:8:10: error: 'a' does not name a type
    const a = 1;
          ^
    constent01.cpp:9:4: error: 'a' was not declared in this scope
    a = 0;
   */
   return 0;
}
