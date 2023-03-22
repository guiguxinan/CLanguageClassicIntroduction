#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   functionPointerArray.cpp
 * Time    :   2023/03/08 16:40:11
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   函数指针数组
*/
void square(float &x,float &y){x=x*x;y=y*y;}

void cube(float &x,float &y){x=x*x*x;y=y*y*y;}

void print(float &x,float &y){cout<<"长："<<x<<" 宽："<<y<<endl;}

void swap(float &x,float &y){int z;z=x;x=y;y=z;}

int main()
{
    /*
    void (*p[5])(int &,int &); 
    声明一个有五个元素的数组指针p，两个int参数，返回值类型void
    */
    float a = 2,b = 3;
    int choise = 0;
    int i;
    void (*p[5])(float &,float &);  //声明一个有五个成员的函数指针数组p，每个成员都带有两个float类型参数且返回void值
    for (i = 0; i < 5; i++)
    {
        cout<<"0. 退出\n1. 正方形\n2. 立方体\n3. 交换x,y的值\n请输入(0~3)值：";
        cin>>choise;
        bool quit = false;
        switch (choise)
        {
        case 0:quit = true;break;
        case 1:p[i] = square;break;
        case 2:p[i] = cube;break;
        case 3:p[i] = swap;break; 
        default:p[i] = 0;
        }
        if (quit)break;
        if (p[i]==0)
        {
            cout<<"请输入(0~3)值!!!\n";
            i-=1;   // 非范围内数字，减去此次循环
            continue;
        }
        cout<<"第"<<i<<"次执行，初始值：";
        print(a,b);
        cout<<"现在调用函数指针数组p["<<i<<"]所指向的函数：\n";
        p[i](a,b);
        cout<<"运算后：\n";
        print(a,b);
    }
    return 0;
}
