#include <iostream>

using namespace std;
/*this指针：
    学生在发新课本时一般都要将自己的名字写在课本上,以说明该课本是自己的,避免与其他人的混淆。
    对象也要在属于自己的每个成员身上写下自己的名字,以证明该成员是自己的成员,而不是其他对象的成员。
    this变量帮助对象做到这一点,this变量记录每个对象的内存地址,然后通过间接访问运算符->访问该对象的成员。
    例程如下：*/ 
class A{
    public:
        int get()const{return i;}
        void set(int x){this->i=x;cout<<"this变量保存的地址:\t"<<this<<endl;}   //  this表明这个变量i属于哪个对象
    private:
        int i;
};
int main()
{
    A a;
    a.set(99);
    cout<<"对象a的内存地址:\t"<<&a<<endl;
    cout<<a.get()<<endl;

    A b;
    b.set(100);
    cout<<"对象b的内存地址:\t"<<&b<<endl;
    cout<<b.get()<<endl;

    /*这说明this变量记录每个单独的对象的内存地址,而this指针则指向每个单独的对象。因
    此不同的对象输出的this变量的内存地址也不同。在默认情况下,该this指针可以省略不写。
    比如第7行的this->i=x;假如我们写i=x;编译器会自动在成员员变量i前面加上this指针
    用来表示这个i成员是属于某个对象的。
*/
    return 0;

    /*this变量内存地址取决于对象*/
}
