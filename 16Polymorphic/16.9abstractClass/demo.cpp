#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo.cpp
 * Time    :   2023/03/07 11:34:18
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   抽象类示例
*/
class Shape{
    /*抽象类*/
    public:
        Shape(){}
        virtual ~Shape(){}
        virtual float getLength(){return 0;}
        virtual float getArea(){return 0;}
        virtual void show(){}
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
    p = new Circle(4.5);
    p->show();
    delete p;

    p = new Triangle(5.6,7.8);
    p->show();
    delete p;

    p = new Square(12,8.5);
    p->show();
    /*抽象类可以声明一个指向抽象类的指针,比如本例第52行的shape *p;
另外要注意的是,在本例中类Triangle和类Circle都继承了抽象类shape的方法,但是它们在实例化
自己的对象时却都没有将抽象类shape进行实例化,这是因为抽象类不具任何功能,实例化一
个抽象类的对象在C++中是非法的,会引起编译错误。
*/
    return 0;
}
