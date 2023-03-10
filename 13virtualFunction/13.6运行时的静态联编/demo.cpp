#include <iostream>
#include <string>
using namespace std;
/*
File    :   demo.cpp
Time    :   2023/02/23 19:48:29
Author  :   Guiguxinan 
Version :   1.0
Desc    :   None
*/
class A{
    public:
        void print(){cout<<"A运行时的静态联编\n";}
};

class B:public A{
    public:
        void print(){cout<<"B运行时的静态联编\n";}
};
int main()
{
    cout<<"13.7 运行时的静态联编\n";
    while (1)
    {
        cout<<"1.父类\n2.子类\n3.退出\n请选择：";
        int select;
        A * pa; // 基类指针pa
        bool quit = false;
        cin>>select;
        switch (select)
        {
        case 1:pa = new A;  // 基类创建内存地址赋给pa
            break;
        case 2:pa = new B;  // 创建派生类B内存地址赋给pa
            break;
        case 3:quit = true;
            break;
        default:cout<<"请输入数字1，2，3"<<endl;
            break;
        }
        if (quit == true){
            break;
        }
        pa->print();
        cout<<&pa<<endl;
    }
    /*
    1.父类
    2.子类
    3.退出
    请选择：1
    A运行时的静态联编
    0x61fe10
    1.父类
    2.子类
    3.退出
    请选择：2
    A运行时的静态联编
    0x61fe10

    运行结果看，pa内存地址都指向基类A
    */
   return 0;
}
