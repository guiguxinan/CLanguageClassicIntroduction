#include <iostream>

using namespace std;
class A{
    public:
        A();
        ~A();
        int get(){return *i;}
        void set(int x){*i = x;}
    private:
        int *i;
};
A::A(){
    cout<<"���캯��ִ���С�����\n";
    i = new int(999);
}
A::~A(){
    cout<<"��������ִ���С�����\n";
    delete i;
}
int main()
{
    /*
    ������ջ�Ͷ��еĲ�ͬ��
    һ���洢��ջ�еĶ���,��:
    A a;
    ���ڳ���������ʱ,����˵�����Ҵ�����ʱ,�Զ����������������ͷŸö�����ռ���ڴ�ռ䡣
    */
    // A a;
    // cout<<a.get()<<endl;
    // a.set(0);
    // cout<<a.get()<<endl;
    /*
    ��ӡ�����
    ���캯��ִ���С�����
    999
    0
    ��������ִ���С���
    */
    /*��һ���洢�ڶ��еĶ���,��:
    new A;
    ����Ҫ����Ա�����ͷ�����ռ�õ��ڴ档����ö�����ռ�õ��ڴ���ڳ�������ű�ϵͳ���ա�
    */    
    A *p = new A;
    cout<<p->get()<<endl;
    p->set(0);
    cout<<p->get()<<endl;
    /*
    ��ӡ�����
    ���캯��ִ���С�����
    999
    0
    */
    return 0;
}
