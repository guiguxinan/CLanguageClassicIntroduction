#include <iostream>

using namespace std;
class A{
    public:
    A(){cout<<"构造函数a"<<endl;}
    ~A(){cout<<"析构函数a"<<endl;}
};
class B{
    public:
    B(){cout<<"构造函数b"<<endl;}
    ~B(){cout<<"析构函数b"<<endl;}
};
class C{
    public:
    C(){cout<<"构造函数c"<<endl;}
    ~C(){cout<<"析构函数c"<<endl;}
};
class D{
    public:
    D(){cout<<"构造函数d"<<endl;}
    ~D(){cout<<"析构函数d"<<endl;}
};
class E:public A,public B,public C,public D
{
    public:
    E(){cout<<"构造函数e"<<endl;}
    ~E(){cout<<"析构函数e"<<endl;}
};
int main()
{
    /*当在多重构造函数时，调用类的构造函数首先调用基类的构造函数，其次再调用派生类的构造函数，析构函数的调用
        与其相反*/ 
    E e;
    /*
    输出结果：
    构造函数a
    构造函数b
    构造函数c
    构造函数d
    构造函数e
    析构函数e
    析构函数d
    析构函数c
    析构函数b
    析构函数a
    */
    return 0;
}
