#include <iostream>

using namespace std;

/*����һ����*/
class Human //  class ����
{
    public: //  ��������
        void getStature()
        {
            // ����������
            cout<<stature<<endl;
        }  
        void getWeight();   // �����������
    // private:    // ˽������
        double stature=171.12; // �������
        double weight=52;  // ��������int
};

int main()
{
    /*
    ��Ͷ��������
        ����һ����������ʣ��Ƕ���ļ��ϣ���������ʵ�ʵĸ��塣
    */
    // ����һ������
    Human jack; // ���� ������
    /*
    ����ͳ�Ա�Ĺ�ϵ��
    ����Ķ������ʹ��.���������еĳ�Ա
    */
    jack.getStature();
    return 0;
}
