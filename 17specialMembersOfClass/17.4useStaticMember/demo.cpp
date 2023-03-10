#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo.cpp
 * Time    :   2023/03/07 19:30:57
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   某大型批发药店成箱采购阿司匹林,又成箱卖出,购进与卖出时均以价格为单位,每箱的
价格都不一样,请设计一个程序来盘点现有库存中阿司匹林的总价格以及它的卖出和购进情况。

*/
class Aspl{
    private:
        double price;
        static double totalPrice;
    public:
        Aspl(double p){price = p;totalPrice = p + totalPrice;}
        ~Aspl(){totalPrice = totalPrice - price;}
        static double getTotalPrice(){return totalPrice;}
        void show(){cout<<"当前购进单价："<<price<<"元, 库存总价格："<<getTotalPrice()<<"元\n";}
        void outShow(int num){cout<<"卖出订单"<<num<<"后库存总价格："<<getTotalPrice()<<"元\n";}
};
double Aspl::totalPrice = 0;

int main()
{
    double a;
    int i = 0,chiose;
    while (true)
    {
        bool quit = false;
        cout<<"当前阿司匹林总价格："<<Aspl::getTotalPrice()<<"元\n";
        cout<<"(0)退出 (1)买入 (2)卖出"<<endl;
        cin>>chiose;
        switch (chiose)
        {
        case 0:quit = true;
            break;
        case 1:
            cout<<"\n请输入第"<<i<<"次购进的阿司匹林的单箱价格：";
            cin>>a;
            Aspl *p[5];
            p[i] = new Aspl(a);
            p[i]->show();
            i++;
            break;
        case 2:
            cout<<"请输入卖出的阿司匹林的编号（即第几次购进）：";
            cin>>i;
            delete p[i];
            p[i]->outShow(i);
            break;
        default:cout<<"请输入0~2之间的数字"<<endl;
            break;
        }
        if (quit)
        {
            break;
        }
    }
    system("pause");
    return 0;
}
