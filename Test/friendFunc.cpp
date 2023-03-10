#include <iostream>

using namespace std;
/*声明友元函数*/
class Pixel;    // 前向引用声明
class Test{
    public:
        void printX(Pixel p);   // 用到类Pixel
};
class Pixel{
    private:
        int x,y;
    public:
        Pixel(int x0,int y0){
            x = x0;
            y = y0;
        }
        void printXy(){
            cout<<"Pixel:("<<x<<","<<y<<")"<<endl;
        }
        friend double getDist(Pixel p1,Pixel p2);   //  友元函数，全局函数
        friend void Test::printX(Pixel p);  // 类Test的成员函数printX为本类的友元函数
};
// 在类体外定义友元函数
void Test::printX(Pixel p){
    cout<<"x="<<p.x<<"\ty="<<p.y<<endl;
}
double getDist(Pixel p1,Pixel p2){
    double xd = double(p1.x - p2.x);     // 使用类Pixel的私有成员x
    double yd = double(p1.y - p2.y);
    return (xd*xd + yd*yd);
}

int main()
{
    Pixel p1(0,0),p2(10,10);
    p1.printXy();
    p2.printXy();
    cout<<"(p1,p2)两点间的距离为:"<<getDist(p1,p2)<<endl;   // 可以直接调用全局函数
    
    Test t;
    t.printX(p1);
    t.printX(p2);
    return 0;
}
