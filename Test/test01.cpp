#include <iostream>

using namespace std;

int main()
{
    /*�������*/
    int oneInt, twoInt;
    char strArray[255];
    string str;
    double oneDouble;
    char oneChar = 'a';
    cout<<"�ֱ������������ֵ��һ���ַ���һ���ַ�����һ������ֵ��\n�Կո�tab����enter�����ָ���"<<endl;
    cin>>oneInt>>twoInt>>oneChar>>strArray>>oneDouble;
    str = strArray;
    cout<<"����������ǣ�"<<endl;
    cout<<"�ַ�����:\t\t"<<str<<endl;
    cout<<"��������ֵ�ֱ���:\t"<<oneInt<<"\t��\t"<<twoInt<<str<<endl;
    cout<<"�ַ���:\t\t\t"<<oneChar<<endl;
    cout<<"����ֵ��:\t\t"<<oneDouble<<endl;

    return 0;
}
