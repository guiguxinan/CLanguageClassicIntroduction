#include <iostream>

using namespace std;

int main()
{
    /*����ָ�뱣��ĵ�ַ*/ 
    int i = 520;
    int j = 1314;
    int *p;
    p = &i;
    cout<<"i: "<<i<<endl;
    cout<<"&i: "<<&i<<endl;
    cout<<"j: "<<j<<endl;
    cout<<"j: "<<&j<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"p: "<<p<<endl;
    /*
    ��ӡ�����
    i: 520
    &i: 0x61fe14
    j: 1314
    j: 0x61fe10
    *p: 520
    p: 0x61fe14
    */

    p = &j;
    cout<<"\ni: "<<i<<endl;
    cout<<"&i: "<<&i<<endl;
    cout<<"j: "<<j<<endl;
    cout<<"j: "<<&j<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"p: "<<p<<endl;
    return 0;

    /*
    ��ӡ�����
    i: 520
    &i: 0x61fe14
    j: 1314
    j: 0x61fe10
    *p: 1314
    p: 0x61fe10
    */
}
