#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo01.cpp
 * Time    :   2023/02/28 14:55:28
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   使用单一继承的缺点
*/
class Father{
    public:
        void smart(){cout<<"父亲很聪明！"<<endl;}
        virtual void beautiful(){};
        virtual ~Father(){cout<<"Father析构函数！"<<endl;}; // 无用的虚函数
};

class Son:public Father{
    public:
        void beautiful(){cout<<"儿子很帅噢~"<<endl;}
        ~Son(){cout<<"Son类析构函数！\n";}
};

int main()
{
    Father *pf;
    int choise = 0;
    while (choise < 99)
    {
        bool quit = true;
        cout<<"0. 退出\n1. 父亲\n2. 儿子\n请选择:";
        cin>>choise;
        switch (choise)
        {
        case 0:quit = true;
            break;
        case 1:pf = new Father;
            pf->smart();
            delete pf;
            break;
        case 2:pf = new Son;
            pf->beautiful();
            delete pf;
            break;
        default:cout<<"请输入从0到2之间的数字。";
        }
        if (quit)
        {
            break;
        }
    cout<<"程序结束"<<endl;
    system("pause");
    }
    
    return 0;
}
