#include <iostream>

using namespace std;
/*
Ĭ�������������빹�캯����ͬ����ָ���Ļ������������Զ�Ϊ���Ǵ���һ��
~A(){}; //  Ĭ����ʽ
*/
class A{
    public:
        A(int x){i = x;cout<<"���캯��ִ�С���"<<i<<endl;}
        ~A(){cout<<"��������ִ�С�����"<<i<<endl;}
        void get(){cout<<i<<endl;}
    private:
        int i;
};
int main()
{
    A a(99);    // ����A(int i),99��ֵ��˽�б���i
    a.get();    // ����get()
    a = 1000;   //  ����A(int i),��1000ת����A����ʱ���󲢸�ֵ��a
    a.get();
    return 0;
}
