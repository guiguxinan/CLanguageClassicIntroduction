#include <iostream>

using namespace std;
/*重载构造函数*/
class rectangle{
    public:
    rectangle(){cout<<"构造一个长方形a！\n";}
    rectangle(int l, int w){length=l;width=w;cout<<"长方形b的面积为："<<length*width<<endl;}
    // 成员变量的初始化:在构造函数的函数头进行初始化
    // rectangle():length(2),width(5){cout<<"长方形b的面积为："<<length*width<<endl;}
    rectangle(int l,int w,int h){length=l;width=w;height=h;cout<<"长方体c的体积为："<<length*width*height<<endl;}    
    int area(){return length*width;}
    private:
    int length,width,height;    //  长宽高
};
int main()
{
    rectangle a;
    /*成员变量的初始化
        创建对象b时初始化成员变量length，width
        另外还有一种方式就是在构造函数的函数头进行初始化
        rectangle():length(2),width(5){}
        */ 
    rectangle b(2,5);
    rectangle c(12,8,5);
    // rectangle b;
    return 0;
}
