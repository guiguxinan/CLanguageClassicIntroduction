#include <iostream>

using namespace std;
class Test{
    public:
    
    int func01(int a, int *b,int *c){
        /*�ú������ض��ֵ*/
        cout<<"func�����У�����ǰ��\n";
        cout<<"a:"<<a<<endl<<"b:"<<*b<<endl<<"c:"<<*c<<endl;
        a = a + 1;
        *b = (*b) * (*b);
        *c = (*c) * (*c) * (*c);
        cout<<"func�����У������\n";
        cout<<"a:"<<a<<endl<<"b:"<<*b<<endl<<"c:"<<*c<<endl;
        return a;
    }
    int func02(int x,int &y,int &z){
        /*���ض��ֵ��������һ����Ϊ�ж�ֵ
            x��ΪԲ�İ뾶�������εı߳�
            *yΪԲ�������*zΪ�����ε����*/ 
        if(x>20000)
        x = 1;
        else{
            y = x * x * 3.14;
            z = x * x;
            x = 0;
        }
        return x;
    }


};

int main()
{
    Test t1;
    int a=1,b=2,c=3;
    cout<<"������,����func����ǰ...\n";
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl<<"c:"<<c<<endl;
    t1.func01(a,&b,&c);
    cout<<"������,����func������...\n";
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl<<"c:"<<c<<endl;
    cout<<"\n==================================================\n";

    Test t2;
    int x,y,z;
    int check;
    cout<<"������һ��������ΪԲ�İ뾶�������εı߳���\n";
    cin>>x;
    check = t2.func02(x,y,z);
    if(check){
        cout<<"��������ֳ������㷶Χ��\n";
    }else{
        cout<<"Բ�����Ϊ��"<<y<<endl;
        cout<<"�����ε����Ϊ��"<<z<<endl;
    }
    return 0;
}


