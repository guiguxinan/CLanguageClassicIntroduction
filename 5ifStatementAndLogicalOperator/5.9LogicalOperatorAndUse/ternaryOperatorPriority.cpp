#include <iostream>

using namespace std;

int main()
{
    /*
    三目运算符的优先级
    z = a>b ? a : a>b ? a : b;
    三目运算符的执行方向为自右向左执行等同于：
    z = a>b ? a : (a>b ? a : b);
    假设a=1，b=2;

    三目运算符的使用问题：
    三目运算符一般都是和赋值运算符=配合使用
    */
    int a=1,b=2,z;
    z = a>b ? a : (a>b ? a : b);
    cout<<"三目运算符的优先级:"<<endl;
    cout<<z<<endl;
    cout<<"三目运算符的使用：三目运算符一般都是和赋值运算符=配合使用。"<<endl;
    cout<<"三目运算符的型别问题："<<endl;
    int i = 1;
    float f = 2.1;
    cout<<(i>f?i:f);
    cout<<"三目运算符在字符型变量中的使用："<<endl;
    char c;
    cin>>c;
    cout<<(c=(c>='A' && c<='Z') ? (c+32) : c);
    return 0;
}
