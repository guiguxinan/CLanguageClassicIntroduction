#include <iostream>

using namespace std;
/*ת�������������
    ���ù��캯����������ת��*/
class A{
    public:
        A(int x){i=x;cout<<"���캯��ִ�С�����"<<i<<endl;}
        ~A(){cout<<"��������ִ�С�����"<<i<<endl;}
        void get(){cout<<i<<endl;}
    private:
        int i;

};
int main()
{
    A a(99);
    a.get();
    a = 1010;
    a.get();
    return 0;
}
