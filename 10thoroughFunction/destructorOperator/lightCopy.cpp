#include <iostream>

using namespace std;
/*ǳ������*/
class A{
    public:
        A(){i = new int;*i=5;}  //  Ϊx�����ڴ�ռ䣬�ڴ�ռ��д��һ��ֵ5
        A(const A &a){
            cout<<"���ƹ��캯��ִ�С�����\n";
            i = a.i;     //  ͨ������a�����ڴ�ռ��е�ֵ5��Ȼ���Ƹ��¶���x
        }
        void print()const{cout<<*i<<endl;}
        void set(int x){*i = x;}
    private:
        int *i;
};
int main()
{
    A *a = new A;
    a->print();
    A b = (*a);
    a->set(999);
    a->print();
    b.print();
    b.set(888);
    a->print();
    b.print();
    delete a;
    return 0;
}
