#include <iostream>

using namespace std;
class Operation{
    public:
        int *p = new int;
        int *p1 = new int;

        void addAndSubstract(){
            /*ָ�������Լ���*/ 
            cout<<"ָ��p����Ŀռ��ַ��\t"<<p<<endl;   // 0xf6ea0  
            p++;
            cout<<"ָ��p�������ַ��\t"<<p<<endl;       // 0xf6ea4  ����4�ֽ�
            p--;
            cout<<"ָ��p�Լ����ַ��\t"<<p<<endl;       // 0xf6ea0  �Լ�4�ֽ�
            p = p - 2;
            cout<<"ָ���2��ָ��p�ĵ�ַ��"<<p<<endl;  //  0xf76e98
        }

        void Assignment(){
            /*ָ�븳ֵ*/
            cout<<"��ֵǰ��\n";
            cout<<"ָ��p�ĵ�ַ��"<<p<<endl;
            cout<<"ָ��p1�ĵ�ַ��"<<p1<<endl;
            p1 = p;
            cout<<"��ֵ��\n";
            cout<<"ָ��p�ĵ�ַ��"<<p<<endl;
            cout<<"ָ��p1�ĵ�ַ��"<<p1<<endl;
        }

        void Decrement(){
            double *a = new double;
            double *b = new double;
            /*ָ�����*/
            cout<<"���ǰ��\nָ��a�ĵ�ֵַ��"<<a<<"\nָ��b�ĵ�ֵַ��"<<b<<endl;
            *a = a - b;
            cout<<"�����ڴ��ֵ��"<<*a<<endl;
        }

        void compare(){
            int *c = new int;
            int *c1 = new int;
            cout<<"ָ��c���ڴ��ַ��"<<c<<"\nָ��c1���ڴ��ַ��"<<c1<<endl;
            if(c>c1){
                cout<<"ָ��c����c1���ڴ��ַ��\n";
            }else
                cout<<"ָ��cС��c1���ڴ��ַ��\n";
        }
};
int main()
{
    Operation op;
    cout<<"ָ�������Լ����㣺\n";
    op.addAndSubstract();
    cout<<"\nָ�븳ֵ��\n";
    op.Assignment();
    cout<<"\nָ��������㣺\n";
    op.Decrement();
    cout<<"\nָ��Ƚ����㣺\n";
    op.compare();
    return 0;
}
