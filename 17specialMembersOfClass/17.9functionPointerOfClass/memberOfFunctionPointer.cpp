#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   memberOfFunctionPointer.cpp
 * Time    :   2023/03/20 11:56:04
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   类的成员函数指针
*/
class Human{
    public:
    virtual void run() = 0;
    virtual void eat() = 0;
};
class Mother:public Human{
    public:
    void run(){cout<<"母亲跑百米要花20秒。\n";}
    void eat(){cout<<"母亲喜欢吃零食。\n";}
};
class Father:public Human{
    public:
    void run(){cout<<"父亲跑百米要花10秒。\n";}
    void eat(){cout<<"父亲不喜欢吃零食。\n";}
};
class Uncle:public Human{
    public:
    void run(){cout<<"舅舅跑百米要花9秒。\n";}
    void eat(){cout<<"舅舅喜欢偷吃零食。\n";}
};
int main()
{
    /*
    声明成员函数 void(A::*p)(int,int);
    实现该指针的前提是先声明对象，使用该对象调用
    */ 


    //声明一个成员函数指针pf内存地址赋值为0,该指针属于类Hunman
    void(Human::*pf)() = 0;
    //声明一个指向抽象类human的指针p,内存地址赋值为0
    Human *p = 0;
    //声明两个字符变量,用来保存两次用户输入的值
    int choise01,choise02;
    //声明一个布尔变量quit作为while循环的判断条件
    bool quit = false;
    //当quit为真时退出循环
    while (quit==false)
    {
        //选择菜单
        cout<<"0. 退出\n1. 母亲\n2. 父亲\n3. 舅舅\n请选择:";
        //将用户的第1次选择保存在choice0l中
        cin>>choise01;
        //将该选择作为判断的依据
        switch (choise01)
        {
        //假如输入了数字0,那么将quit的值赋为true,然后退出switch循环
        case 0:quit=true;break;
        //假如输入了数字1,那么创建mother类的新对象,并将p指向它,然后退出switch循环
        case 1:p = new Mother;break;
        //假如输入了数字2,那么创建father类的新对象,并将p指向它,然后退出switch循环
        case 2:p = new Father;break;
        //假如输入了数字,那么创建uncle类的新对象,并将p指向它,然后退出switch循环
        case 3:p = new Uncle;break;
        default:choise01 = 'q';break;
        }
        if(quit){
            break;
        }
        if (choise01 == 'q')
        {
            cout<<"请输入0~3的数字！！！\n";continue;
        }
        cout<<"1. 吃饭\n2. 跑步\n";
        cin>>choise02;
        switch (choise02)
        {
        case 1:pf = &Human::eat;break;
        case 2:pf = &Human::run;break;        
        default:break;
        }
        (p->*pf)();
        delete p;
    }
    return 0;
}
