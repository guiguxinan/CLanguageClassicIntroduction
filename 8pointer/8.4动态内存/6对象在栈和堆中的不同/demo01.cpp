#include <iostream>

using namespace std;
class A{
    public:
        A();
        ~A();
        int get(){return *i;}
        void set(int x){*i = x;}
    private:
        int *i;
};
A::A(){
    cout<<"构造函数执行中。。。\n";
    i = new int(999);
}
A::~A(){
    cout<<"析构函数执行中。。。\n";
    delete i;
}
int main()
{
    /*
    对象在栈和堆中的不同：
    一个存储在栈中的对象,如:
    A a;
    会在超出作用域时,比如说遇到右大括号时,自动调用析构函数来释放该对象所占用内存空间。
    */
    // A a;
    // cout<<a.get()<<endl;
    // a.set(0);
    // cout<<a.get()<<endl;
    /*
    打印结果：
    构造函数执行中。。。
    999
    0
    析构函数执行中。。
    */
    /*而一个存储在堆中的对象,如:
    new A;
    则需要程序员自行释放其所占用的内存。否则该对象所占用的内存会在程序结束才被系统回收。
    */    
    A *p = new A;
    cout<<p->get()<<endl;
    p->set(0);
    cout<<p->get()<<endl;
    /*
    打印结果：
    构造函数执行中。。。
    999
    0
    */
    return 0;
}
