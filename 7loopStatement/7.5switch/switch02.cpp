#include <iostream>

using namespace std;

int main()
{
    /*switch�Ĳ˵�����:
        switch����������ѭ��,��while(1)����if(;;),�����������û�����ѡ��ĵ����˵�
        �ò˵�����ֹͣ,ֱ���û�����ĳһcaseΪֹ��
        �������ѭ����switch�����˵�,����������:*/
    bool quit = false;
    for(;;) //  ��������ѭ��
    {
        char i;
        cout<<"\n(0)��(1)Ҽ(2)��(3)��(4)��(5)��(6)½(7)��(8)��(9)�˳�(q):";
        cin>>i;
        switch (i)
        {
        case '0':cout<<"����������㣡";
            break;
        case '1':cout<<"���������Ҽ!";
            break;
        case '2':cout<<"��������Ƿ�!";
            break;
        case '3':cout<<"�����������!";
            break;
        case '4':cout<<"�����������!";
            break;
        case '5':cout<<"�����������!";
            break;
        case '6':cout<<"���������½!";
            break;
        case '7':cout<<"�����������!";
            break;
        case '8':cout<<"��������ǰ�!";
            break;
        case '9':cout<<"��������Ǿ�!";
            break;
        case 'q':quit = true;
            break;
        default:cout<<"������Ĳ���0��9֮�����Ч���֡�";
        }
        if (quit == true)
        {
            break;
        }
    }
    cout<<"�����ѽ�����\n";
    return 0;
}
