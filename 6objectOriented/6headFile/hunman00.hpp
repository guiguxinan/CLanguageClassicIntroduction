#include <iostream>
using namespace std;

class A
{
    /*
    成员内联函数
    */ 
    public:
        // inline void setNum(int, int); //将成员函数声明为内联函数
        // inline void pt();
        // 将声明和定义合并
        void setNum(int x, int y){i = x; j = y;};
        void print(){cout<<"两数相乘为："<<i * j<<endl;};

    private:
        int i, j;
};