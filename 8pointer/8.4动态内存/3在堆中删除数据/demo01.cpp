#include <iostream>

using namespace std;
class A{
    public:
        A(){cout<<"构造函数执行中。。。\n";i = 999;}
        ~A(){cout<<"析构函数执行中。。。\n";}
        int get(){return i;}
    private:
        int i;
};
int main()
{
    A *p = new A;
    /*
    假如我们要删除在堆中创建的对象,我们可以直接删除指向该对象的指针,这样会自动调用对象的析构函数来销毁该对象,
    同时释放内存。如:
    */
    delete p;
    return 0;
}
