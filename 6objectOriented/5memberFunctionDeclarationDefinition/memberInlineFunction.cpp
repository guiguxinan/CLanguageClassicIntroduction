#include <iostream>

using namespace std;

class A
{
    /*
    ��Ա��������
    */ 
    public:
        // inline void setNum(int, int); //����Ա��������Ϊ��������
        // inline void pt();
        // �������Ͷ���ϲ�
        void setNum(int x, int y){i = x; j = y;};
        void print(){cout<<"�������Ϊ��"<<i * j<<endl;};

    private:
        int i, j;
};

int main()
{
    A a;
    a.setNum(52,10);
    a.print();
    return 0;
}

// void A::setNum(int x, int y){i = x;j = y;}
// void A::pt(){cout<<"�������Ϊ��"<<i * j<<endl;}
