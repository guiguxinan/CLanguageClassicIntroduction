#include <iostream>

using namespace std;
void result1(int x, int y, int z);
void result2(int x, int y, int z);

int main()
{
    /*
    �߼�����������ȼ�
    �����������ӣ�
    if(x>1 && y>1 || z>1)
    ���ֽ������������Ϊ��ʱ����
    1.���x����1����y����z>1Ϊ��
    2.x��y����1������z����1Ϊ��
    */
    int x, y, z;
    cout<<"������x��ֵ��"<<endl;
    cin>>x;
    cout<<"������y��ֵ��"<<endl;
    cin>>y;
    cout<<"������z��ֵ��"<<endl;
    cin>>z;
    // result1(x, y, z);
    result2(x, y, z);
    return 0;
}
void result1(int x, int y, int z)
{
    // ��һ�ֽ��:���x����1����y����z>1,Ϊ��
    if (x>1 && (y>1 || z>1))
    {
        cout<<"xһ������1��y��z����һ������1\n";
    }
    else
    {
        cout<<"xһ��������1��y��z��������1��������һ������1����ȫ������1\n";
    }
}

void result2(int x, int y, int z)
{
    // ��2�ֽ��:x��y����1������z����1Ϊ��
    if ((x>1 && y>1) || z>1)
    {
        cout<<"x,y,z����һ������1������z����1������x��y������1\n";  // ����Ϊ��
    }
    else
    {
        cout<<"zһ��������1��x��y��һ������1������x��y��������1\n"; // ����Ϊ��
    }
}