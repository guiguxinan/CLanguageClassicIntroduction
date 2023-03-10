#include <iostream>

using namespace std;
/*浅拷贝：*/
class A{
    public:
        A(){i = new int;*i=5;}  //  为x创建内存空间，内存空间中存放一个值5
        A(const A &a){
            cout<<"复制构造函数执行。。。\n";
            i = a.i;     //  通过引用a调用内存空间中的值5，然后复制给新对象x
        }
        void print()const{cout<<*i<<endl;}
        void set(int x){*i = x;}
    private:
        int *i;
};
int main()
{
    A *a = new A;
    a->print();
    A b = (*a);
    a->set(999);
    a->print();
    b.print();
    b.set(888);
    a->print();
    b.print();
    delete a;
    return 0;
}
