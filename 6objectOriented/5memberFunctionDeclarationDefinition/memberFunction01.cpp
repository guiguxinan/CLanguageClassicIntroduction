#include <iostream>

using namespace std;
class Hunman
{
    /*
     成员函数的声明和定义
    */ 
    public:
        void func();   // 声明无参数函数func
        void setAge(int a); // 声明参数为a的getAge函数
        int getAge(){return age;}
    private:
        int age;    // 私有变量age
};
// 定义成员函数
void Hunman::setAge(int a)
{
    /*
    判断输入年龄的年龄段：
    如果年龄在0~16岁，则输出"你的年龄为a岁，正值少年！"
    如果年龄在17~35岁，则输出"你的年龄为a岁，正值青年！"
    如果年龄在36~60岁，则输出"你的年龄为a岁，不年轻了！"
    如果你的年龄在61~120，则输出"你的年龄为a岁，你已白发垂髫！"
    */ 
    if (a>0 && a<=16)
    {
        age = a;
        cout<<"你的年龄为"<<getAge()<<"岁，正值少年！\n";
    }    
    else if (a>16 && a<=36)
    {
        age = a;
        cout<<"你的年龄为"<<getAge()<<"岁，正值青年！\n";
    }
    else if (a>36 && a<=60)
    {
        age = a;
        cout<<"你的年龄为"<<age<<"岁，不年轻了！\n";
    }
    else if (a>60 && a<=120)
    {
        age = a;
        cout<<"你的年龄为"<<age<<"岁，你已白发垂髫！\n";
    }
    else
    {
        cout<<"输入有误！请重新输入！\n";
    }
}

int main()
{
    Hunman tom;
    cout<<"tom，";
    tom.setAge(60);
    return 0;
}
