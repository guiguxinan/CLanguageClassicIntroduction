#include <iostream>

using namespace std;
/*在成员函数中实现自加*/
class Num{
    public:
        Num(){i=2;}
        ~Num(){}
        int get(){return i;}
        void set(int x){i = x;}
        // 新建自加函数
        void add(){++i;}    //  ++n,先得到n的值，再做加法运算
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

    return 0;
}
