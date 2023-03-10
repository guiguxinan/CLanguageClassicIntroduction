#include <iostream>

using namespace std;

int main()
{
    /*用指针删除堆中数据
        由于使用new创建的内存空间不会被系统自动释放,因此假如你不去释放它,那么该区域
        的内存将始终不能为其他数据所使用,而指向该内存的指针是个个局部变量,当定义该指针的函
        数结束并返回时,指针也就消失了,那么我们就再也找不到这场快内存区域。同样的道理,假如
        指向该内存区域的指针自动消失了,计算机就再也找不到该区我的内存了,就好象是丢失了这
        块内存一样,我们把这种情况叫做内存泄露。这种糟糕的情况一直持续到程序结束,该区域
        的内存才能恢复使用。因此假如你不需要一块内存空间,那么就必须对指向它的指针使用关键
        字delete。如:
        int *p = new int;
        delete p;   这将释放指针所指向的内存,而不会释放指针。因此你还可以使用该指针,如
        p = new int;
        在这里又新建了一块类型为int的内存空间,然后用 p指向它。在使用完毕后,你可再次对该内存进行释放,如:
        delete p;
        但是请不要再次对该指针进行删除,因为它所指向的内存区域已经被释放,如果再进行释放,将会使程序崩溃。
        不过,假如我们将该指针赋为0的话,那么删除一个空指针将是安全的
        int *p=new int; //新建一块内存区域,用p指向它
        delete p;       //删除指针指向的内存区域
        p=0;            //设置空指针
        delete p;       //再次删除该指针也没什么危险
        */ 
       int *p = new int;        // 新建一块内存区域，用p指向它
       *p = 10;                 // 将10赋值给p,存放在内存区域中
       cout<<"1*p:"<<*p<<"\n"<<p<<endl;   // 输出内存中的值10
       delete p;                // 删除指针指向的内存区域后，最好将内存中保存的地址清0
       cout<<"2*p:"<<*p<<endl;  // 输出清0后指针p的内存值
       p = 0;                   //  将指针p中保存的地址清0
       p = new int;             // 新建一块类型为int的内存区域
       *p = 11;                 // 将11赋值给p,存放在内存区域中
       cout<<"3*p:"<<*p<<"\n"<<p<<endl;   // 输出内存中的值11
       delete p;
        *p = 11;
    return 0;
}
