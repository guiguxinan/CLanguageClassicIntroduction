#include <iostream>

using namespace std;

int main()
{
    /*continue��䣺
        ��ѭ����ĳ������continue�󣬳�����ִ�к������䣬������ת��ѭ���忪ʼ�ĵط�����ִ��*/ 
    int i = 0;
    while (i<4)
    {
        i++;
        if (i == 1)
        {
            continue;
        }
    cout<<"i:"<<i<<endl;
    }
    
    return 0;
}
