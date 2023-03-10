#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   pureVirtualFunc.cpp
 * Time    :   2023/03/07 15:57:08
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   纯虚函数,virtual float getLength() = 0; 使函数初始化为0变成纯虚函数
*/
class Shape{
    /*抽象类作接口，使继承派系层次更加分明*/
    public:
        Shape(){}
        virtual ~Shape(){}
        virtual float getLength() = 0;  
        virtual float getArea() = 0;
        virtual void show() = 0;
};

class Square:public Shape{
    public:
        Square(float w,float l):width(w),length(l){}
        virtual ~Square(){}
        virtual float getWidth(){return width;}
        virtual float getLength(){return length;}
        virtual float getArea(){return width*length;}
        virtual void show(){cout<<"正方形面积为："<<getArea()<<endl;}
    protected:
        float width;
        float length;
};

class Triangle:public Square{
    public:
        Triangle(float w,float l):Square(w,l),width(w),length(l){}
        virtual ~Triangle(){}
        virtual float getWidth(){return width;}
        virtual float getLength(){return length;}
        virtual float getArea(){return width*length/2;}
        virtual void show(){cout<<"三角形的面积为："<<getArea()<<endl;}
    protected:
        float width;
        float length;
};

class Circle:public Shape{
    public:
        Circle(float r):R(r){}
        virtual ~Circle(){}
        virtual float getLength(){return R;}
        virtual float getArea(){return R*R*3.14;}
        virtual void show(){cout<<"圆的面积为："<<getArea()<<endl;}
    protected:
        float R;
};

int main()
{
    Shape *p;
    int chiose = 0;
    while (chiose<9)
    {
        chiose = 0;
        bool quit = false;
        cout<<"(0)退出 (1)正方形 (2)三角形 (3)圆"<<endl;
        cout<<"请选择："<<endl;
        cin>>chiose;
        switch (chiose)
        {
        case 0:quit=true;
            break;
        case 1:p = new Square(7.5,7.5);
            p->show();
            delete p;
            break;
        case 2:p = new Triangle(5.5,8);
            p->show();
            delete p;
            break;
        case 3:p = new Circle(9.5);
            p->show();
            delete p;
            break;
        default:cout<<"请输入0~3之间的数字！"<<endl;
            break;
        }
        if (quit)
        {
            break;
        }
    }
/*
一个抽象基类仍然可以派生出抽象类,只要该类没有把纯虚函数全部覆盖掉,派生出的仍为抽象类
假如其子类没有将它的纯虚函数全部覆盖掉,那么该孩子类也是抽象类
假如已经确定某个基类的虚函数一定会被其所有的派生类覆盖掉,那么不如将其设置为纯虚函数
*/
    return 0;
}
