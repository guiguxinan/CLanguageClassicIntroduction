#include <iostream>

using namespace std;

int main()
{
    /*由于goto语句能直接跳到程序的某一处开始执行,因此可能会导致许多不易察觉的错误并且使程序结构看上去不那么严密,比较松散。
    例程如下:*/ 
    int i = 1;
    if(i<10)
    goto yes;
    cout<<"*";
    i++;
    goto yes;
    cout<<"程序结束！\n";
    cout<<"**********\n";
    yes:;
    return 0;
    /*这里由于不慎将标号yes:放到了结尾处,所以程序还没开始就结束了,而且该程序中还使
用了两个goto语句,很明显是多余的,但是编译器却没有报错。这就是现在都不用goto语句的
原因,因为一旦goto语句出了错,进行调试是非常困难的。
*/
}
