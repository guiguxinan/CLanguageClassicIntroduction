#include <iostream>

using namespace std;

int main()
{
    /*ָ��ͱ������ͣ�
        ָ��ֻ�ܴ洢������ͬ���͵ĵ�ַ*/ 
    int a = 1;
    float *p;
    p = &a;
    cout<<p<<endl;  // ��int���͵ĵ�ַ��ֵ��float���ͣ��ᱨ��pointerAndVariableType.cpp:11:10: error: cannot convert 'int*' to 'float*' in assignment
    return 0;
}
