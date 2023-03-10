#include <iostream>

using namespace std;

/*析构函数：
    作用：析构函数用于在对象被销毁后清除它所占用的内存空间,也就是说它可以清除由构造函数创建的内存。
    例程如下:
    class A{
        ~A(){};
    };
    函数名A前面多一个浪纹号~构成析构函数
    特点：
        1.析构函数跟构造函数一样不能有返回值,如,void~A(){};或者int~A(){};都是错误的
        2.析构函数没有参数，如~A(int i){};错误
        3.一个类只有一个析构函数
*/
class A
{
public:
    A(){cout<<"构造函数执行完毕；\n";}
    ~A(){cout<<"析构函数执行完毕；\n";}
};

int main()
{
    // A a;

    /*析构对象数组:
        A a[3];
        该语句声明了属于类A的对象数组a,它有3个对象成员,依次为a[0]、a[1]和a[2]。*/
    A a[3];
    /*在创建一个由3个对象组成的对象数组时,执行了3次构造函数,在程序结束时,又执行了3次析构函数来释放掉3个对象所占用的内存
*/
}
