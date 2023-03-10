#include <iostream>

using namespace std;

int main()
{
    /*goto语句：
     goto语句是最古老的语句,它的历史应该追溯到计算机发展的早期年代,那时候程序一般都是由一个标号、几个语句和一个跳转组成的。
     在C++中也有这样的标号,它是由一个名字加上一个冒号":"来组成的。如:
    number:
    该标号通常被放置在一段可执行的C++语句的左边,通过它后面的goto语句来实现跳转
    例程如下:*/ 
    int i=1;    // 初始化i为1
    number: i++;    // 循环标志：将i进行+1的操作
    cout<<"*\n";  //  输出*
    if(i<10)
    goto number;    // if做判断，如果i小于10，则执行goto语句，goto number就是跳转到number:标记处执行：右边的操作
    cout<<"程序结束！\n";
    cout<<"**********\n";
    return 0;
}
