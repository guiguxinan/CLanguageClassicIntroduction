#include <iostream>

using namespace std;

int main()
{
    /*���ַ�Ϊ������while���*/
    char choice = 'y';
    while (choice == 'y' || choice == 'Y')
    {
        cout<<"������������ϵ����ǲα�����\n";
        cout<<"�ٿ�һ�飿��y/n:\n";
        cin>>choice;
    }
    cout<<"����ִ����ϣ��ټ���";
    return 0;
}
