#include <iostream>

using namespace std;
/*普通函数重载*/
//声明一个无返回值并且带有一个整型参数的func函数
void func(int);
//声明一个无返回值并且带有一个长整型参数的func函数
void func(long);
//声明一个返回值为浮点型并且带有一个浮点型参数的func函数
float func(float);
//声明一个无返回值并且带有一个双精度型参数的func函数
void func(double);

int main()
{
    //定义一个整型变量a并将它的值赋为1
    int a = 1;
    //定义一个长整型变量b并将它的值赋为1000000
    long b = 1000000;
    //定义一个浮点型变量c并将它的值赋为1.5
    float c = 1.5;
    //定义一个双精度型变量d并将它的值赋为6.45679
    double d = 6.45679;
    //输出整型变量a的值
    cout<<"a:"<<a<<endl;
    //输出长整型变量b的值
    cout<<"b:"<<b<<endl;
    //输出浮点型变量c的值
    cout<<"c:"<<c<<endl;
    //输出双精度型变量d的值
    cout<<"d:"<<d<<endl;
    //调用func并将整型变量a传递给它,编译器会根据参数a的类型自动判断调用哪个函数
    func(a);
    //调用func并将整型变量b传递给它,编译器会根据参数c的类型自动判断调用哪个函数
    func(b);
    //调用func并将整型变量c传递给它,编译器会根据参数c的类型自动判断调用哪个函数
    func(c);
    //调用func并将整型变量d传递给它,编译器会根据参数d的类型自动判断调用哪个函数
    func(d);

    return 0;
}
void func(int a){cout<<"a的平方："<<a*a<<endl;}
void func(long b){cout<<"b的平方："<<b*b<<endl;}
float func(float c){cout<<"c的平方："<<c*c<<endl;}
void func(double d){cout<<"d的平方："<<d*d<<endl;}
