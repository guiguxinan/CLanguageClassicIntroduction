#include <iostream>

using namespace std;

int main()
{
    /*ָ���ַ��ָ�뱣��ĵ�ַ��ָ�뱣��ĵ�ַ��ֵ*/ 
    int i = 1;
    int *p;
    p = &i;
    *p = 11;    // ʹ��*P�޸Ĵ����i�е�ֵΪ11
    cout<<"i:"<<i<<endl;
    cout<<"&i:"<<&i<<endl;
    cout<<"p:"<<p<<endl;
    cout<<"*p:"<<*p<<endl;  // *pָ�� ��ȡpָ�뱣��i�ĵ�ַ��ֵ
    return 0;
}
