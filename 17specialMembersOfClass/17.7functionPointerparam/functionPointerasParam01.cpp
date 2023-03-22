#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   functionPointerasParam.cpp
 * Time    :   2023/03/17 11:57:06
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   函数指针作为参数使用
*/
void square(float &x,float &y){x=x*x;y=y*y;}

void cube(float &x,float &y){x=x*x*x;y=y*y*y;}

void swap(float &x,float &y){int z;z=x;x=y;y=z;}

void print(void(*p)(float &x,float &y),float &x,float &y){
    cout<<"执行前：\nx："<<x<<" y："<<y<<endl;
    p(x,y);
    cout<<"执行后：\nx："<<x<<" y："<<y<<endl;
}
int main()
{
    float a = 2,b = 3;
    int choise = 0;
    bool quit = false;
    void (*p)(float &,float &);
    while (quit=true)
    {
        cout<<"0. 退出\n1. 平方\n2. 立方\n3. 交换参数\nimport you select：";
        cin>>choise;
        switch (choise)
        {
        case 0:quit=false;break;
        case 1:p=square;break;
        case 2:p=cube;break;
        case 3:p=swap;break;        
        default:p=0;break;
        }
        if (quit==false)
        {
            break;
        }
        if (p==0)
        {
            cout<<"请输入0~3的数字！！！\n";
            continue;
        }
        print(p,a,b);
    }
    return 0;
}
