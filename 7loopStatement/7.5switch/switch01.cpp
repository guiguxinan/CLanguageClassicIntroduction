#include <iostream>

using namespace std;

int main()
{
    /*��һϵ�����������жϿ�����if����ifelse���,���������:�ܶ�Ļ�,��if����Ƚ�
    �鷳,��ʱ����switch��䡣switch�����Ը��ݲ�ͬ�����ֻ����ַ���ѡ��ִ�в�ͬ�ķ�֧
    switch(����)
    {
        case 1:���;
            break;
        case 2:���;
            break;
        case 3:���;
            break;
        default:���;
    }
    switch�����С�����еı���,����������������ֻ����ַ�,Ҳ�����Ǳ��ʽ,��֮��Ҫ��һ���ɹ��жϵ�ֵ��
    ���С�����е�ֵ��������ĳ��case��,���case���������ͻ�ִ�С�
    ִ����Ϻ�break�����ó�������switchѭ����
    ��С�����е�ֵ�����е�case�е����ֻ����ַ��������,��ôִ��default��֧����䡣
    �����û����ȵ�ֵ,Ҳû��defaultĬ�Ϸ�֧,�����Զ��˳�switch���,switch��������
    */ 
    int i;
    cout<<"���������ֵ��";
    cin>>i;
    switch (i)
    {
    case 0:cout<<"����������㣡";
        break;
    case 1:cout<<"���������Ҽ!";
        break;
    case 2:cout<<"��������Ƿ�!";
        break;
    case 3:cout<<"�����������!";
        break;
    case 4:cout<<"�����������!";
        break;
    case 5:cout<<"�����������!";
        break;
    case 6:cout<<"���������½!";
        break;
    case 7:cout<<"�����������!";
        break;
    case 8:cout<<"��������ǰ�!";
        break;
    case 9:cout<<"��������Ǿ�!";
        break;
    default:cout<<"������Ĳ���0��9֮�����Ч���֡�";
    }
    cout<<"�����ѽ�����\n";
    return 0;
}
/*
ע�⣺switch��䲻��©��break
*/
