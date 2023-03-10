#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b;
    // int * const c = &a; // 常量指针，只能改变所指向的对象的值,不能指向任何其他变量
    int const * const c = &a;   // 指针不能直接改变所指向的值，也不能指向其他变量地址
    *c = &b;
    cout<<a<<endl;
    cout<<c<<endl;

    return 0;
}
