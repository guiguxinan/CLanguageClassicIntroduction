#include <iostream>

using namespace std;
class A;    // 前向引用声明
class Base02
{
    private:
        float x;
    public:
        void print(const A &K);
};

class D:public Base02{
    private:
        float y;
};

class A{
    private:
        int aaa;
    public:
        A(){aaa=100;}
        friend void Base02::print(const A &K);
};
void Base02::print(const A &K){
    cout<<"友元函数\n";
    cout<<"Base02:"<<K.aaa<<endl;
}


int main()
{
    /*
    a.如果基类有友元类或者友元函数，则其派生类不会因继承关系而也有此友元类或友元函数
    b.如果基类是某类的友元，则这种友元关系是被继承的
    */
    Base02 b;
    D d;
    A a;
    d.print(a);
    b.print(a);
    return 0;
}
