#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
/**
 * File    :   memberFuncPointerArray.cpp
 * Time    :   2023/03/20 17:11:58
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   成员函数指针数组
*/
class Paper{
    public:
    void read(){cout<<"纸上面的字可以读\n";}
    void write(){cout<<"纸可以用来写字\n";}
    void burn(){cout<<"纸可以用来点火\n";}
};
//使用typedef声明一个成员函数指针类型p,该类型的指针指向paper类的成员函数,该函数不返回值且没有参数
typedef void(Paper::*p)();

int main()
{
    //用类型p来声明一个func成员函数指针数组,并将它的成员函数指针初始化为它们所指向的函数的内存地址。
    //与普通数组元素一样,成员函数指针数组的每个成员函数指针也会拥有个编号,该编号从0开始
    p func[3]={&Paper::read,&Paper::write,&Paper::burn};
    //声明一个指向paper类的普通指针
    Paper *pp;
    //声明一个字符串choice
    string choise;
    //声明一个布尔变量quit并将它的值赋为false
    bool quit = false;
    while (quit == false)
    {
        cout<<"(0)退出 (1)读 (2)写 (3)点火：";
        cin>>choise[0];    //将用户的选择保存在字符串choice的第一个元素
        // 判断输入的字符是否在0到3之间
        if (choise[0]>'3' || choise[0]<'0')
        {
            cout<<"请输入0~3之间的数字！\n";
        }
        // 否则再判断输入的数字是否为0，如果为0则将quit赋值为true
        else if (choise[0]=='0')
        {
            quit==true;
            break;
        }
        else
        {
            //定义一个整型变量用来接收被转换为整型的字符串
            int n;
            //新建一个paper类对象,用pp来指向它
            pp = new Paper;
            //将choice转换为整型后再赋给n
            n = atoi(choise.c_str());
            (pp->*func[n-1])(); //对象pp调用函数指针数组*func[n-1]，n是菜单选择从1开始选择，数组下标从0开始，所以n-1
            delete pp;  //不用后释放对象调用的指针数组内存
        }
    }
    return 0;
}
