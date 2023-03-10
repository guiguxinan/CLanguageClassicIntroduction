#include <iostream>

using namespace std;

int main()
{
    /*指针地址，指针保存的地址，指针保存的地址的值*/ 
    int i = 1;
    int *p;
    p = &i;
    *p = 11;    // 使用*P修改存放在i中的值为11
    cout<<"i:"<<i<<endl;
    cout<<"&i:"<<&i<<endl;
    cout<<"p:"<<p<<endl;
    cout<<"*p:"<<*p<<endl;  // *p指针 获取p指针保存i的地址的值
    return 0;
}
