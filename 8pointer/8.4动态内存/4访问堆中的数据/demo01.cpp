#include <iostream>

using namespace std;
class A{
    public:
        void set(int x){i = x;}     //  ����iֵ�ĺ���
        int get()const{return i;}   //  ��ȡiֵ�ĺ���
    private:
        int i;
};
int main()
{
    /*��Աָ���������->�����ø÷��ſ���ʵ�ֶ�ȡ������ڴ��ַ���ҷ��ʸö�;��ĳ�Ա*/ 
    A *a = new A;   // ������ж���aָ��
    a->set(2);      // ָ�����a���øö����Ա����set
    cout<<a->get()<<endl;
    delete a;
    return 0;
}
