#include <iostream>

using namespace std;
class CType         // 轮胎类
{
private:
    double radius;  //  半径
    double width;   //  宽度
public:
    CType():radius(16),width(185){
        cout<<radius<<"\tCType 构造函数"<<endl;
    }
    CType(double r,double w):radius(r),width(w){
        cout<<radius<<"\tCType 构造函数"<<endl;
    }
    ~CType(){
        cout<<radius<<"\tCType 析构函数"<<endl;
    }
    double getRadius(){
        return radius;
    }
    double getWidth(){
        return width;
    }
};

class CCar          // 汽车类
{
private:
    double price;   // 价格
    CType type;
public:
     CCar();
     CCar(double,double,double);
    ~ CCar();
    double getPrice();
    CType getCtype();
};

CCar::CCar(){
    double price = 50010;
    CType();
    cout<<price<<"\tCCar 构造函数"<<endl;
}
CCar::CCar(double p,double tr,double tw):price(p),type(tr,tw){
    cout<<price<<"\tCCar 构造函数"<<endl;
}

CCar::~CCar(){
    cout<<price<<"\tCCar 析构函数"<<endl;
}
double CCar::getPrice(){
    return price;
}
CType CCar::getCtype(){
    return type;
}

int main()
{
    CCar car(48900,17,225);
    /*
    终端输出：
    17      CType 构造函数
    48900   CCar 构造函数
    48900   CCar 析构函数
    17      CType 析构函数
    */
    return 0;
}
