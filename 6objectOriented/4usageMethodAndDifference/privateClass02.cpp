#include <iostream>

using namespace std;

class Num
{
    private:
    int num;
    /*
    ����˽�����ݳ�Ա,Ȼ���ù��к���������Ϊ����ߴ���İ�ȫ��,��ֹ��ɴ��������������
    ����˵������һ������ȡֵ��Χ����,�ֻ���˵�е�ʱ��Ҫ�����û���������ֵ�ķ�Χ,
    ����ڱ���������Ҫ�����û�����һ������0��С��100������,��ô�Ϳ����ڽӿں���set���趨:
    */
    public:
    void setNum(int w){
        if (w > 0 && w < 100)
            // ���wֵ��1~100����ֵ��num
            num = w;
        else
        {
            // �������"�뽫set�����Ĳ�������Ϊһ������0��С��100������,����Ĭ������Ϊ0"
            cout<<"�뽫set�����Ĳ�������Ϊһ������0��С��100������,����Ĭ������Ϊ0\n";
            num = 0;
        }
    }
    int getNum(){return num;}
};

int main()
{
    Num intNum;
    intNum.setNum(99);
    cout<<"˽�б���num��ֵΪ��"<<intNum.getNum()<<endl;
    return 0;
}
