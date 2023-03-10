#include <iostream>
#include <iomanip>   //使用头文件iomanip中的setprecision()函数
using namespace std;

int main()
{
   // 浮点型float
   float a = 12.14325890765876281;
   double b = 12.14325890765876281;
   cout<<setprecision(15)<<a<<"\n"<<b;    // setprecision()函数用来设置输出的精度
   return 0;
}
/*
打印结果：
12.1432590484619
12.1432589076588
float精度在7~8位，8位往后均不正确
double

*/