#include <iostream>

using namespace std;
class A{
    public:
        A();
        ~A();
        int get(){return *i;}
        void set(int x){*i = x;}
    private:
        int *i; //  ��i����Ϊָ��
};
int main()
{
    A *p = new A;
    cout<<p->get()<<endl;   // 999
    p->set(0);  // ��ս�0��ֵ��i
    cout<<p->get()<<endl;   // 0
    delete p;
    cout<<p->get()<<endl;   // ����ڴ�ռ��ַ
    return 0;
}
A::A(){
    cout<<"���캯��ִ���С�����\n";
    i = new int(999);  //  �������ڴ�����
}
A::~A(){
    cout<<"��������ִ���С�����\n";
    delete i;   //  ɾ�����ڴ��еĿռ�
}
