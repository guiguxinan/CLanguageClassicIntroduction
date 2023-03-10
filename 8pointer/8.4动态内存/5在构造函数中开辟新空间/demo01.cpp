#include <iostream>

using namespace std;
class A{
    public:
        A();
        ~A();
        int get(){return *i;}
        void set(int x){*i = x;}
    private:
        int *i; //  将i设置为指针
};
int main()
{
    A *p = new A;
    cout<<p->get()<<endl;   // 999
    p->set(0);  // 清空将0赋值给i
    cout<<p->get()<<endl;   // 0
    delete p;
    cout<<p->get()<<endl;   // 随机内存空间地址
    return 0;
}
A::A(){
    cout<<"构造函数执行中。。。\n";
    i = new int(999);  //  创建新内存区域
}
A::~A(){
    cout<<"析构函数执行中。。。\n";
    delete i;   //  删除新内存中的空间
}
