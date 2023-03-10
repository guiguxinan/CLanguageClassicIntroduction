#include <iostream>

using namespace std;

/*常量指针：
    int *const p;   // 将p声明为常量指针，指针p不可变
*/

class ConstPointer{
    public:
        int get()const{return i;}
        void set(int x){i = x;}
    private: 
        int i;
};

int main()
{
    ConstPointer *cp1 = new ConstPointer;
    cout<<cp1<<endl;
    cp1 = cp1 + 1;
    cout<<cp1<<endl;
    cout<<"-----------------------------------------\n";
    ConstPointer *const cp2 = new ConstPointer;
    cout<<cp2<<endl;
    // cp2 = cp2 - 1;  // 声明为*const后，cp2不可变,error: assignment of read-only variable 'cp2'
    cp2->set(2);
    cout<<cp2->get()<<endl;
    /*cp2指向的内存可以修改，cp2本身不可以*/
    cout<<"-----------------------------------------\n";

    /*指向常量的指针*/
    const ConstPointer* cp3 = new ConstPointer;
    cout<<cp3<<endl;
    cp3 = cp3 + 1;
    cout<<cp3<<endl;
    // cp3->set(2); // error: passing 'const ConstPointer' as 'this' argument discards qualifiers [-fpermissive]
    cout<<cp3->get()<<endl;
    cout<<"-----------------------------------------\n";

    /*指向常量的常指针*/
    const ConstPointer *const cp4 = new ConstPointer;
    cout<<cp4<<endl;
    // cp4 = cp4 + 1;  // error: assignment of read-only variable 'cp4'
    // cp4->set(1);    // error: passing 'const ConstPointer' as 'this' argument discards qualifiers [-fpermissive]
    cout<<cp4->get()<<endl;

    /*总结：
        指针可以通过内存地址间接访问数据,每个变量都有自己的地址,我们可以通过取址运算符(&)获得它们的地址。
        它们的地址可以存储在指针变量中。我们可以通过间接运算符(*)读取指针指向地址的值。

        指针的类型由它们所指向的对象来定义,指针未被初始化一个个内存地址或刚删除一个指针都要将该指针赋为0。
        否则的话将会导致该指针失控。
        
        假如不想改变指针,那么将该指针定义为const,假如不想改变变指针指向的值,则将指针指向的值定义为const,
        假如既不想改变指针也不想改变指针指向的值,那么把指针和指针指向的值都定义为const。

        用new在堆中可以创建一个对象,然后将内存地址赋给指针,之后我们就可以通过该指针访问堆中的对象,假如要删除该对象,
        我们只需要对指针使用关键字delete,那么就会删除指针指向的对象并释放存储该对象的内存空间。
        但是我们要注意一点,指针并没有被删除,并且它仍然指向原来的内存空间,因此我们必须对它的内存地址清0或者重新赋值

    */
    return 0;
}
