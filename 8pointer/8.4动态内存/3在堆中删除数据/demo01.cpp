#include <iostream>

using namespace std;
class A{
    public:
        A(){cout<<"���캯��ִ���С�����\n";i = 999;}
        ~A(){cout<<"��������ִ���С�����\n";}
        int get(){return i;}
    private:
        int i;
};
int main()
{
    A *p = new A;
    /*
    ��������Ҫɾ���ڶ��д����Ķ���,���ǿ���ֱ��ɾ��ָ��ö����ָ��,�������Զ����ö�����������������ٸö���,
    ͬʱ�ͷ��ڴ档��:
    */
    delete p;
    return 0;
}
