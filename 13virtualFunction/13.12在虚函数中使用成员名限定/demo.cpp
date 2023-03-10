#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo.cpp
 * Time    :   2023/02/23 20:42:46
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   在虚函数中可以使用成员名限定强行解除动态联编
*/
class F{
    public:
        F(){i = 1;}
        void print(){cout<<"printF\n";}
        int getI(){return i;}
    private:
        int i;
};

class S:public F{
    public:
        void print(){cout<<"printS\n";}
        int getI(){return i;}
    private:
        int i;
};
int main()
{
    S *p = new S;
    p->print();
    p->F::print();  // 该形式强行解除动态联编
    return 0;
}
