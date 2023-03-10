#include <iostream>

using namespace std;
/*2.设计并实现二维坐标系下点的类 Point，类的每个对象含有横、纵坐标。为类 Point添加必要的计算函数，
例如，计算给定点到(0.0)的距离，计算给定两点间的距离，判断给定的3个点是否能构成一个三角形等。*/
class Point{
    private:
        double x;   // 横轴坐标
        double y;   // 纵轴坐标
    public:
        Point();
        Point(double,double);
        void setXy(Point);
        void setXy(double,double);
        void setX(double);
        void setY(double);
        int getX();
        int getY();
        void getXy();
        void toOrinDistence();
        void TwoPointDistence();
        void whetherTriangle();
};
// 构造函数传参
Point::Point(double x1,double y1){
    x = x1;
    y = y2;
}
// 对象传参
void Point::setXy(Point p1){
    return;
}
// 定义x，y
void Point::setXy(double x2,double y2){
    x = x2;
    y = y2;
    return;
}
// 定义x坐标
void Point::setX(double x3){
    x = x3;
    return;
}
// 定义y坐标
void Point::setY(double y3){
    y = y3;
    return;
}
// 获取x坐标
int Point::getX(){
    return x;
}
// 获取y坐标
int Point::getY(){
    return y;
}
// 输出x，y轴坐标
void Point::getXy(){
    cout<<"x:"<<x<<", y:"<<y<<endl;
}

// 计算给定点到(0.0)的距离
void Point::toOrinDistence(){

}

// 计算给定两点间的距离
void TwoPointDistence(){

}

// 判断给定的3个点是否能构成一个三角形
void whetherTriangle(){
    
}

int main()
{

    return 0;
}
