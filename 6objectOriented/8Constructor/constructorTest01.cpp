#include <iostream>

using namespace std;

class rectange
{
public:
    /*可将函数的声明和定义合并在一起,该函数的名字即是类名rectangle,表示它是一个构造函数。
      它带有两个参数,分别为l和w,大括号的函数体中有两行语句,分别将l和w的值赋
      给length和width(length和width是该类的私有成员变量,代表表长和宽)。*/
    rectange(int l,int w){length=l,width=w;}  
    // 返回面积  
    int area(){return length*width;}    
private:
    double length,width;
};

int main()
{   
    /*
    创建一个长方形并计算它的面积
    */
    // 创建对象a的同时进行初始化
    rectange a(2.5,4.8);
    //  调用求面积的函数area()
    cout<<"a的面积为:"<<a.area();
    // return 0;    构造函数没有返回值
}
