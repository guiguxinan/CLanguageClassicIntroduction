#include <iostream>

using namespace std;
/*���ع��캯��*/
class rectangle{
    public:
    rectangle(){cout<<"����һ��������a��\n";}
    rectangle(int l, int w){length=l;width=w;cout<<"������b�����Ϊ��"<<length*width<<endl;}
    // ��Ա�����ĳ�ʼ��:�ڹ��캯���ĺ���ͷ���г�ʼ��
    // rectangle():length(2),width(5){cout<<"������b�����Ϊ��"<<length*width<<endl;}
    rectangle(int l,int w,int h){length=l;width=w;height=h;cout<<"������c�����Ϊ��"<<length*width*height<<endl;}    
    int area(){return length*width;}
    private:
    int length,width,height;    //  �����
};
int main()
{
    rectangle a;
    /*��Ա�����ĳ�ʼ��
        ��������bʱ��ʼ����Ա����length��width
        ���⻹��һ�ַ�ʽ�����ڹ��캯���ĺ���ͷ���г�ʼ��
        rectangle():length(2),width(5){}
        */ 
    rectangle b(2,5);
    rectangle c(12,8,5);
    // rectangle b;
    return 0;
}
