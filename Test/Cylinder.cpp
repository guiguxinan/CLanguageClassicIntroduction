#include <iostream>

using namespace std;
/*定义圆柱体类Cylinder，它具有私有成员变量r与h，分别表示圆柱体的底圆半径和高。
类中需要提供一些必要的公有成员函数，包括计算底圆周长、底圆面积及圆柱体体积等。
编写主函数，对类Cylinder进行测试:
说明类Cylinder 的对象，输入底圆半径与圆柱体的高，然后计算该圆柱体的表面积与体积，并输出结果。*/

class Cylinder{
private:
    double r;
    double h;
public:
    double PI = 3.14;
    double bc;  // 底面周长
    double ba;  // 底面积
    double v;   // 体积
    double s;   // 表面积
    double bottomCircumference(double);
    double bottomArea(double);
    double volume(double, double);
    double surFace(double, double,double);
    void show();

    Cylinder(double r, double h){
        this->r = r;
        this->h = h;
        bc = bottomCircumference(r);    //  底圆周长
        ba = bottomArea(r); // 底圆面积
        v = volume(ba,v);    // 圆柱体积
        s = surFace(ba,bc,h);    //  圆柱体表面积
    }


};
void Cylinder::show(){
    cout<<"圆柱体的底面周长为："<<bc<<"\n圆柱体的底面积为："<<ba<<"\n圆柱体的体积为："<<v<<"\n圆柱体的表面积为："<<s<<endl;
}
// 底圆周长
double Cylinder::bottomCircumference(double r){
    return 2*PI*r;
}
// 底圆面积
double Cylinder::bottomArea(double r){
    return PI*r*r;
}
// 圆柱体体积
double Cylinder::volume(double ba,double h){
    return ba * h;
}
// 圆柱体表面积
double Cylinder::surFace(double ba,double bc,double h){
    return 2 * ba + bc * h;
}

int main()
{
    while (true)
    {
        double r,h;
        cout<<"\n请分别输入半径和高：";
        cin>>r>>h;
        Cylinder c1(r,h);
        c1.show();
    }
    return 0;
}
