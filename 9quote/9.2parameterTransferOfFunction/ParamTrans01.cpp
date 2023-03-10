#include <iostream>

using namespace std;
/*通过值来传递函数参数*/
class ParamTrans{
    public:
    void swap(int a,int b){
        int c;
        cout<<"swap函数中,交换前,a:"<<a<<",b:"<<b<<endl;
        c = a;
        a = b;
        b = c;
        cout<<"swap函数中,交换后,a:"<<a<<",b:"<<b<<endl;

    }
};

int main()
{
    ParamTrans pt;
    int a = 4,b = 5;
    cout<<"主程序中,交换前,a："<<a<<",b:"<<b<<endl;
    pt.swap(a,b);
    return 0;
}
