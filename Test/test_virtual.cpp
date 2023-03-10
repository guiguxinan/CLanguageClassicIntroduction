#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   test_virtual.cpp
 * Time    :   2023/02/27 23:30:39
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   None
*/
class Base{
    public:
        virtual void func(){
            cout<<"Base::func()"<<endl;
        }
};
class De:public Base{
    public:
        virtual void func(){
            cout<<"De::func()"<<endl;
        }
};

void FuncTest(){
    Base b;
    De d;
    b.func();
    d.func();
}
int main()
{
    FuncTest();
    return 0;
}
