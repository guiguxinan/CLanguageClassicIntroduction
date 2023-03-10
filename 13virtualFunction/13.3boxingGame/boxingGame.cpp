#include <iostream>
#include <string>
using namespace std;
/*
File    :   boxingGame.cpp
Time    :   2023/02/23 15:47:36
Author  :   Guiguxinan 
Version :   1.0
Desc    :   拳击游戏
*/
/*
一般选手一拳的力量为260磅Poser
阿里一拳的力量为420磅Ali
刘易斯一拳的力量为480磅Lewis
泰森一拳的力量为500磅Tyson
霍利菲尔德一拳的力量为350磅holy
*/
class Poser{
    public:
        virtual void beat()const{cout<<"一般选手一拳的力量为260磅\n";}
};

class Ali:public Poser{
    public:
        void beat()const{cout<<"阿里一拳的力量为420磅\n";}
};

class Lewis:public Poser{
    public:
        void beat()const{cout<<"刘易斯一拳的力量为480磅\n";}
};

class Holy:public Poser{
    public:
        void beat()const{cout<<"霍利菲尔德一拳的力量为350磅\n";}
};

int main()
{
    Poser * a[5];
    Poser * p;
    int chiose;
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)


    {
        cout<<"\n查看拳王一击之力\n1. 阿里\n2. 刘易斯\n3. 霍利菲尔德\n4. 一般拳手\n输入你要查看的拳手：";
        cin>>chiose;
        switch (chiose)
        {
        case 1:p = new Ali;
            break;
        case 2:p = new Lewis;
            break;
        case 3:p = new Holy;
            break;
        default:
            p = new Poser;
            break;
        }
        a[i] = p;
        a[i]->beat();
    }

    /*知识点:
一个函数被说明为虚函数,在派生类中覆盖了该函数,那么该函数也是个虚函数,不过你
也可以把它说明为虚函数,这样看起来更好懂些。
*/
    return 0;
}
