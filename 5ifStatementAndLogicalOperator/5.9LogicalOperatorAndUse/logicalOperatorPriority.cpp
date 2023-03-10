#include <iostream>

using namespace std;
void result1(int x, int y, int z);
void result2(int x, int y, int z);

int main()
{
    /*
    逻辑运算符的优先级
    对于以下例子：
    if(x>1 && y>1 || z>1)
    两种结果（假设条件为真时）：
    1.如果x大于1，和y或者z>1为真
    2.x和y大于1，或者z大于1为真
    */
    int x, y, z;
    cout<<"请输入x的值："<<endl;
    cin>>x;
    cout<<"请输入y的值："<<endl;
    cin>>y;
    cout<<"请输入z的值："<<endl;
    cin>>z;
    // result1(x, y, z);
    result2(x, y, z);
    return 0;
}
void result1(int x, int y, int z)
{
    // 第一种结果:如果x大于1，和y或者z>1,为真
    if (x>1 && (y>1 || z>1))
    {
        cout<<"x一定大于1，y和z其中一个大于1\n";
    }
    else
    {
        cout<<"x一定不大于1，y和z均不大于1，或者有一个大于1或者全部大于1\n";
    }
}

void result2(int x, int y, int z)
{
    // 第2种结果:x和y大于1，或者z大于1为真
    if ((x>1 && y>1) || z>1)
    {
        cout<<"x,y,z中有一个大于1，或者z大于1，或者x，y都大于1\n";  // 条件为真
    }
    else
    {
        cout<<"z一定不大于1，x，y有一个大于1，或者x，y都不大于1\n"; // 条件为假
    }
}