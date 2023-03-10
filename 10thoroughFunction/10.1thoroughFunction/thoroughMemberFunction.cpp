#include <iostream>

using namespace std;
/*成员函数重载*/
class A{
    public:
    void func(){cout<<"no return statement in function returning!\n";}
    void func(int a, int b){a=b;b=a;cout<<"a:"<<a<<",b:"<<b<<endl;}
};

int main()
{
    A a;
    a.func();
    a.func(3,2);
    return 0;
}
