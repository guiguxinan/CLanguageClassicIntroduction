#include <iostream>

using namespace std;

int main()
{
    /*
    if��䣺
    if(a > b)
        z = a;
    else 
        z = b;
    ��Ŀ�����
    z = (a > b) ? a : b;
    ���a����b��zȡֵ���ұߵ�a������zȡֵ���ұߵ�b

    */
    int a,b,c;
    cout<<"������a��ֵ��"<<endl;
    cin>>a;
    cout<<"������b��ֵ��"<<endl;
    cin>>b;
    c = (a > b) ? a : b;
    cout<<"c��ֵΪ"<<c;
    return 0;
}
