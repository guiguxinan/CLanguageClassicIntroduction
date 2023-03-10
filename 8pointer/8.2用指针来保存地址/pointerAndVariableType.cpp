#include <iostream>

using namespace std;

int main()
{
    /*指针和变量类型：
        指针只能存储与它相同类型的地址*/ 
    int a = 1;
    float *p;
    p = &a;
    cout<<p<<endl;  // 将int类型的地址赋值给float类型，会报错：pointerAndVariableType.cpp:11:10: error: cannot convert 'int*' to 'float*' in assignment
    return 0;
}
