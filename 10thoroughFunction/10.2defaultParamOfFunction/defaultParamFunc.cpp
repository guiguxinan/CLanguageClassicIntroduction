#include <iostream>

using namespace std;
// void func(int i=0,int j=0);
// void func(int i,int j){cout<<"i:"<<i<<"\tj:"<<j<<endl;}

class A{
    public:
    void set(int=30,int=5);
    void count(bool = false);
    private:
    int x,y;
};
void A::set(int width,int length){x = width;y=length;}
void A::count(bool var){
    if (var==true){
        cout<<"var为真时："<<x * y<<endl;
    }else{
        cout<<"var为假时："<<x*y/2<<endl;
    }
}

int main()
{   
    // 全局函数可以有一个或多个默认值
    // func();
    // func(3,4);
    A a;
    a.set();
    a.set(3,4);
    a.count(1);
    a.count();
    return 0;
}
