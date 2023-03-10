#include <iostream>

using namespace std;

int main()
{
    /*内存泄漏：
    int *p = new int;
    p = new int;
     就会造成内存泄露,这是因为,第1行定义了一个指针p并使其指向一块内存空间,第2
    行又将一块新的内存空间的地址赋给了p。这样第1行所开辟的那块内存空间就无法再使用了,
    因为指向它的指针现在已经指向了第2块空间。*/
    int *p1 = new int;
    int *p2 = new int;
    /*分别用两个指针来指向两块内存空间,这样,每块空间都有一个个指针来指向,就不会造成找不到某块空间的内存泄露现象。*/
    
    return 0;
}
