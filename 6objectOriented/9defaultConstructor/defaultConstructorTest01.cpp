#include <iostream>

using namespace std;

/*Ĭ�Ϲ��캯����
    �����޷�ȷ����Ҫ�����ĳ����εĳ��Ϳ�,Ҳ����˵���ǲ��ṩ���캯��,��ôϵͳ���Զ�����һ�����캯��,�ú���û�в���,
    ����Ҳ��ִ���κι���,��ֻ���ڹ���һ��������:rectangle(){}
*/
class rectange
{
public:
/*һ����˵,ֻҪ���ǲ������κι��캯��,��ôϵͳ�ͻ�Ϊ���Ǵ������ʲô���ܶ�û�е�Ĭ�Ϲ��캯��,
��һ�����Ǵ�����һ�����캯��,�����Ĭ�Ϲ��캯���ͻᱻ�Զ����Ρ�
�������Ǵ����˴������Ĺ��캯����,����Ҫһ�����������������캯��,��ô�ͱ����Լ�
�ٴ���һ��,��: rectange(){cout<<"�����´�����Ĭ�Ϲ��캯��!";}*/
    rectange(){cout<<"\n�����´�����Ĭ�Ϲ��캯��!\n";}
    rectange(int l,int w){length=l,width=w;}  
    // �������  
    int area(){return length*width;}    
private:
    double length,width;
};

int main()
{   
    rectange a(3,4);
    rectange b;
    cout<<"a�����Ϊ��"<<a.area();
    

}