#include <iostream>

using namespace std;
/*ͨ��ֵ�����ݺ�������*/
class ParamTrans{
    public:
    void swap(int a,int b){
        int c;
        cout<<"swap������,����ǰ,a:"<<a<<",b:"<<b<<endl;
        c = a;
        a = b;
        b = c;
        cout<<"swap������,������,a:"<<a<<",b:"<<b<<endl;

    }
};

int main()
{
    ParamTrans pt;
    int a = 4,b = 5;
    cout<<"��������,����ǰ,a��"<<a<<",b:"<<b<<endl;
    pt.swap(a,b);
    return 0;
}
