#include <iostream>

using namespace std;
/*
默认析构函数：与构造函数相同，不指定的话，编译器会自动为我们创建一个
~A(){}; //  默认形式
*/
class A{
    public:
        A(int x){i = x;cout<<"构造函数执行。。"<<i<<endl;}
        ~A(){cout<<"析构函数执行。。。"<<i<<endl;}
        void get(){cout<<i<<endl;}
    private:
        int i;
};
int main()
{
    A a(99);    // 调用A(int i),99赋值给私有变量i
    a.get();    // 调用get()
    a = 1000;   //  调用A(int i),将1000转换成A类临时对象并赋值给a
    a.get();
    return 0;
}
