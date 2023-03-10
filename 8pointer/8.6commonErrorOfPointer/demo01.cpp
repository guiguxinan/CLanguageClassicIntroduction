#include <iostream>

using namespace std;

int main()
{
    /*指针常见错误：
        删除一个指针后一定要将该指针设置为空指针,这是因为删除该指针只会释放它所指向的内存空间,不会删除指针,
        因此这个指针还存在,并且它仍然会指向原来的内存空间,这时如果你再次尝试使用该指针,那么将会导致程序出错。*/
    int *p = new int;
    *p = 3;
    cout<<"将3赋给p的地址后,指针p读取的值:\t"<<*p<<endl;
    delete p;
    p = 0;
    cout<<"删除空间后,指针p读取的值:\t"<<*p<<endl;  // 随机分配一个值
    long *p1 = new long;
    cout<<"创建新空间后指针p中保存的地址：\t"<<p<<endl;
    *p1 = 9999;
    cout<<"指向新空间的指针pl保存的地址:\t"<<p1<<endl;
    *p = 23;
    cout<<"将23赋给p的地址后,指针p读取的值:\t"<<*p<<endl;   // 23
    cout<<"将23赋给p的地址后,指针p1读取的值:\t"<<*p1<<endl; // 23
    delete p1;
    return 0;
}
