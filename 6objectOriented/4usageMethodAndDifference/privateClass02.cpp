#include <iostream>

using namespace std;

class Num
{
    private:
    int num;
    /*
    设置私有数据成员,然后用公有函数来这是为了提高代码的安全性,防止造成错误的输入和输出。
    比如说输入了一个超过取值范围的数,又或者说有的时候要控制用户所输入数值的范围,
    如果在本例中我们要控制用户输入一个大于0而小于100的数字,那么就可以在接口函数set中设定:
    */
    public:
    void setNum(int w){
        if (w > 0 && w < 100)
            // 如果w值在1~100，则赋值给num
            num = w;
        else
        {
            // 否则输出"请将set函数的参数设置为一个大于0而小于100的数字,否则默认设置为0"
            cout<<"请将set函数的参数设置为一个大于0而小于100的数字,否则默认设置为0\n";
            num = 0;
        }
    }
    int getNum(){return num;}
};

int main()
{
    Num intNum;
    intNum.setNum(99);
    cout<<"私有变量num的值为："<<intNum.getNum()<<endl;
    return 0;
}
