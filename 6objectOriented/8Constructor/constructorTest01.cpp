#include <iostream>

using namespace std;

class rectange
{
public:
    /*�ɽ������������Ͷ���ϲ���һ��,�ú��������ּ�������rectangle,��ʾ����һ�����캯����
      ��������������,�ֱ�Ϊl��w,�����ŵĺ����������������,�ֱ�l��w��ֵ��
      ��length��width(length��width�Ǹ����˽�г�Ա����,������Ϳ�)��*/
    rectange(int l,int w){length=l,width=w;}  
    // �������  
    int area(){return length*width;}    
private:
    double length,width;
};

int main()
{   
    /*
    ����һ�������β������������
    */
    // ��������a��ͬʱ���г�ʼ��
    rectange a(2.5,4.8);
    //  ����������ĺ���area()
    cout<<"a�����Ϊ:"<<a.area();
    // return 0;    ���캯��û�з���ֵ
}
