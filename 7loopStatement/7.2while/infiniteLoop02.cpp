#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        int i;
        cout<<"\n������һ�����֣�\n";
        cin>>i;
        if (i == 5)
        {
            cout<<"���н������������\n";
            continue;
        }
        if (i == 6)
        {
            cout<<"��ϧ�ˣ���һ�㣡\n";
            break;
        }
        cout<<"��������Ϊ��"<<i<<endl;
    }
    cout<<"����������ټ���\n";
}
