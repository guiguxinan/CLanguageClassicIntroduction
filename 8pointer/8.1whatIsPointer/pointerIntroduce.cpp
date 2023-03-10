#include <iostream>

using namespace std;

int main()
{
   /*C++这门编程语言赋予了指针无比强大的功能,通过指针,程序员可以直接对内存进行操
    作,这样的优点是使程序紧凑、简洁、高效:不过由于它的概念比较复杂,使用起来又非常灵
    活,因此初学者容易犯错,本章将使用通俗的语言向读者介绍指针的概念,以便避免一些常见
    的错误。

    什么是地址：假如我们要去动物园,那么我们就得先知道动物园的地址,然后可通过该地址找到动物园
    同理,计算机要找到变量i,必须先找到i的地址,也就是i在内存中的编号,然后通过该
    编号,计算机可访问i并且对它进行操作。

    计算机获取地址方式：
        int i = 10;
        &i  通过在i前面加&
    */
    int i = 10;
    cout<<&i<<endl;
    return 0;
    /*
    打印结果：0x61fe1c  即为i的内存地址
    */
}
