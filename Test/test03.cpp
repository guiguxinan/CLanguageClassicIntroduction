#include <iostream>

using namespace std;

void func(int a=11,int b=22,int c=33)
{
    cout<<"a="<<a<<",b="<<b<<",c="<<c<<endl;
}

int main()
{
    /*函数默认值*/
    func();
    func(2);
    func(23,21);
    func(232,32,11);
    return 0;
}
