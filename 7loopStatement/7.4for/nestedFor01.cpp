#include <iostream>

using namespace std;

int main()
{
    /*Ƕ��forѭ����if������Ƕ��,��ôforѭ��Ҳ����Ƕ��,Ƕ�׾���һ��ѭ�����а�����һ��ѭ��,�����ѭ��ÿִ��һ��,�����ѭ����Ҫ������ִ��һ�Ρ�*/ 
    //  ʾ����
    int a,b;    //  �����к���
    char c;     //  �����ַ�
    cout<<"����������";
    cin>>a;     //  ������
    cout<<"����������";
    cin>>b;     //  ������
    cout<<"�����ַ���";
    cin>>c;     //  �����ַ�
    for (int i = 0; i < a; i++) //  ���ѭ��
    {
        for (int j = 0; j < b; j++) //  �ڲ�ѭ��
        {
            cout<<c;
        }
        cout<<"\n";
    }
    
    return 0;
}
