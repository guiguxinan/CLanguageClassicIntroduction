#include <iostream>

using namespace std;

class Human
{
    /*
    ˽�г�Ա������private����˽�г�Ա�������ܱ�����ֱ�ӷ���
    ֻ��ͨ�����������õĹ��нӿں���������
    */ 
    public:
    void setWeight(int w){weight = w;}   // ���нӿں���������w��int���ͣ���˽�г�Ա������ֵ��w
    int getWeight(){return weight;}  // ���нӿں�������ȡweightֵ

    private:
    int weight;
};

int main()
{
    Human jack;
    jack.setWeight(65);
    cout<<"jack������Ϊ��"<<jack.getWeight()<<endl;
    Human tom;
    tom.setWeight(70);
    cout<<"tom������Ϊ��"<<tom.getWeight()<<endl;
    return 0;
}

