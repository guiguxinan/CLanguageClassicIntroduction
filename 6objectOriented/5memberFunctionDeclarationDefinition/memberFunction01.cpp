#include <iostream>

using namespace std;
class Hunman
{
    /*
     ��Ա�����������Ͷ���
    */ 
    public:
        void func();   // �����޲�������func
        void setAge(int a); // ��������Ϊa��getAge����
        int getAge(){return age;}
    private:
        int age;    // ˽�б���age
};
// �����Ա����
void Hunman::setAge(int a)
{
    /*
    �ж��������������Σ�
    ���������0~16�꣬�����"�������Ϊa�꣬��ֵ���꣡"
    ���������17~35�꣬�����"�������Ϊa�꣬��ֵ���꣡"
    ���������36~60�꣬�����"�������Ϊa�꣬�������ˣ�"
    ������������61~120�������"�������Ϊa�꣬���Ѱ׷����أ�"
    */ 
    if (a>0 && a<=16)
    {
        age = a;
        cout<<"�������Ϊ"<<getAge()<<"�꣬��ֵ���꣡\n";
    }    
    else if (a>16 && a<=36)
    {
        age = a;
        cout<<"�������Ϊ"<<getAge()<<"�꣬��ֵ���꣡\n";
    }
    else if (a>36 && a<=60)
    {
        age = a;
        cout<<"�������Ϊ"<<age<<"�꣬�������ˣ�\n";
    }
    else if (a>60 && a<=120)
    {
        age = a;
        cout<<"�������Ϊ"<<age<<"�꣬���Ѱ׷����أ�\n";
    }
    else
    {
        cout<<"�����������������룡\n";
    }
}

int main()
{
    Hunman tom;
    cout<<"tom��";
    tom.setAge(60);
    return 0;
}
