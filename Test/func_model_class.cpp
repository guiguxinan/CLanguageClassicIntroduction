#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   func_model_class.cpp
 * Time    :   2023/03/09 23:37:23
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   定义class类型函数模板并调用
*/
template <class T>
void Swap(T &x,T &y){
    T tmp = x;
    x =y;
    y = tmp;
}
class myDate{
    public:
        myDate();
        myDate(int,int,int);
        void printDate()const;
    private:
        int year,month,day;
};
myDate::myDate(){
    year = 2023;
    month = 03;
    day = 9;
    printDate();
}
myDate::myDate(int y,int m,int d){
    year = y;
    month = m;
    day = d;
    printDate();
}
void myDate::printDate()const{
    cout<<"date:"<<year<<"/"<<month<<"/"<<day<<endl;
}

int main()
{
    int n = 5,m = 6;
    Swap(n,m);  // 编译器自动生成void Swap<int>(int &x, int &y)函数
    myDate d1,d2(2022,12,12);
    Swap(d1,d2);    // 生成void Swap<myDate>(myDate &x, myDate &y)函数
    return 0;
}
/*
函数模板可以带多个类型参数：
template <class T1,class T2>
void Print(T1 t1,T2 t2){cout<<"T1:"<<t1<<"\nT2:"<<T2<<endl;}

*/