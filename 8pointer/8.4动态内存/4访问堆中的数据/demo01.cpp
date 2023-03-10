#include <iostream>

using namespace std;
class A{
    public:
        void set(int x){i = x;}     //  设置i值的函数
        int get()const{return i;}   //  获取i值的函数
    private:
        int i;
};
int main()
{
    /*成员指针运算符“->”利用该符号可以实现读取对象的内存地址并且访问该对;象的成员*/ 
    A *a = new A;   // 定义堆中对象a指针
    a->set(2);      // 指针变量a调用该对象成员函数set
    cout<<a->get()<<endl;
    delete a;
    return 0;
}
