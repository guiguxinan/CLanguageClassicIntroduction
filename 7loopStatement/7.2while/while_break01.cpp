#include <iostream>

using namespace std;

int main()
{
    /*break��䣺
        ��ѭ�����ڼ���break����ǿ���˳�ѭ����Ȼ�����ִ��ѭ����������*/ 
    int i = 0;
    while (i < 5)
    {
        i++;
        if (i == 2)
        {
            break;
        }
    cout<<"����ѭ�����ڵ�i:"<<i<<endl;
    }
    cout<<"����ѭ�������i:"<<i<<endl;
    
    return 0;
}
