#include <iostream>

using namespace std;

int main()
{
    /*
    ��Ŀ����������ȼ�
    z = a>b ? a : a>b ? a : b;
    ��Ŀ�������ִ�з���Ϊ��������ִ�е�ͬ�ڣ�
    z = a>b ? a : (a>b ? a : b);
    ����a=1��b=2;

    ��Ŀ�������ʹ�����⣺
    ��Ŀ�����һ�㶼�Ǻ͸�ֵ�����=���ʹ��
    */
    int a=1,b=2,z;
    z = a>b ? a : (a>b ? a : b);
    cout<<"��Ŀ����������ȼ�:"<<endl;
    cout<<z<<endl;
    cout<<"��Ŀ�������ʹ�ã���Ŀ�����һ�㶼�Ǻ͸�ֵ�����=���ʹ�á�"<<endl;
    cout<<"��Ŀ��������ͱ����⣺"<<endl;
    int i = 1;
    float f = 2.1;
    cout<<(i>f?i:f);
    cout<<"��Ŀ��������ַ��ͱ����е�ʹ�ã�"<<endl;
    char c;
    cin>>c;
    cout<<(c=(c>='A' && c<='Z') ? (c+32) : c);
    return 0;
}
