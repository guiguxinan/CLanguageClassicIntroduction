#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo01.cpp
 * Time    :   2023/03/08 11:03:26
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   函数指针运用
*/

/*使用函数指针可以减少一些重复的代码,因为函数指针名可以看作函数名的代号,加上*号就表示要访问该函数,
所以它经常会在条件或者判断语句里出现,以便于用户选择调用不同名字但类型和参数相同的函数。
另外要注意,函数指针可以指向某个函数,但前提是被指向的函数的参数和返回值都与该函数指针被声明时的返回值和参数相吻合
*/

// 创建一个是否是数字的函数，该函数必须放在被调用函数的前面
bool check(string str){
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i]>'9' || str[i]<'0') && (str[i]!='.'))
        {
            return false;
        }
        return true;
    }
    return 0;
}

float triangle(float &x,float &y){
    return x*y/2;
}

float rectangle(float &x,float &y){
    return x*y;
}

float swap(float &x,float &y){
    float n;
    n = x;
    x = y;
    y = n;
    return 0;
}

void print(float &x,float &y){
    cout<<"长："<<x<<" "<<"宽："<<y<<endl;
}

void get(float &a,float &b){
    cout<<"输入x的值：";
    string str1;cin>>str1;
    while (!check(str1))
    {
        cout<<"输入的不是数字，请重新输入。。。\n";
        cin>>str1; 
    }
    a = atof(str1.c_str());
    cout<<"输入y的值：";
    string str2;cin>>str2;
    while (!check(str2))
    {
        cout<<"输入的不是数字，请重新输入。。。\n";
        cin>>str1;
    }
    b = atof(str2.c_str());
}

int main()
{
    void(*p)(float &,float &);  // 声明一个函数指针p，该指针指向一个返回void值并且带有两个float参数的函数。
    float(*fp)(float &,float &);
    bool quit = false;
    float a = 2,b = 3;
    int choise;
    while (choise)
    {
        cout<<"(0)退出 (1)设定长度 (2)三角形 (3)矩形 (4)交换长度 ：";
        cin>>choise;
        switch (choise)
        {
        case 0:
            quit = true;
            break;
        case 1:
            p = get;
            break;
        case 2:
            fp = triangle;
            break;
        case 3:
            fp = rectangle;
            break;
        case 4:
            p = swap;
            break;
        default:
            cout<<"请输入0~4之间的数字，重新输入\n";
            break;
        }
        if (quit)
        {
            break;
        }
        if (choise==1 || choise==4)
        {
            print(a,b);
            p(a,b);
            print(a,b);
        }
        else if (choise==2 || choise==3)
        {
            print(a,b);
            cout<<"面积为："<<fp(a,b)<<endl;
        }
    }
    return 0;
}
