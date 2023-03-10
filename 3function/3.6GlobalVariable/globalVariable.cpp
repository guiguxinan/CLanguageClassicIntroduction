#include<iostream>
using namespace std;
/*
全局变量：在任意函数外部定义的变量
对任何函数都有效，包括main函数
*/
void add(); // 声明函数
int x = 11, y = 77; // 定义全局变量
int main()
{
    cout<<"main函数调用：\n";
    cout<<"x:"<<x<<"y:"<<y<<endl;
    add();
    return 0;
}

void add()
{
    cout<<"add函数调用：\n";
    cout<<"x:"<<x<<"y:"<<y;
}

/*
打印结果：
main函数调用：
x:11y:77
add函数调用：
x:11y:77
*/