#include <iostream>

using namespace std;
/*重载前置自加运算符*/
class Num{
    public:
        Num(){i=2;}
        ~Num(){}
        int get(){return i;}
        void set(int x){i = x;}
    //     // 新建自加函数
        void add(){++i;}    //  ++n,先得到n的值，再做加法运算
        void operator++(){++i;} // void 返回类型，operator++：重载运算函数名；
    private:
        int i;
};
int main()
{
    Num n;
    cout<<n.get()<<endl;
    n.set(10);
    n.add();
    cout<<n.get()<<endl;
    ++n;    // 调用operator++：重载运算函数；
    cout<<n.get()<<endl;
    return 0;
}
