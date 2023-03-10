#include<iostream>
using namespace std;
namespace a
{
    int b = 5;
}
namespace c
{
    int b = 8;
}
int main()
{
    int b = 10;
    /*
    多行注释
    */
    //  单行注释
    
    // 将命名空间a,b中的变量b释放出来
    using namespace a;
    using namespace c;
    cout<<"主函数的变量值b为："<<b<<endl;
    cout<<"命名空间a中的变量值b为："<<a::b<<endl;
    cout<<"命名空间c中的变量值b为："<<c::b;
    return 0;
}