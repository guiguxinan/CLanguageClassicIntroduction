#include <iostream>
#include <string>

using namespace std;

class F{
    public:
        F(){i = 1;}
        virtual void print(){cout<<"printF\n";} // 给该成员函数添加virtual关键字，表示该成员函数可被多个对象调用
        int getI(){
            return i;
        }
    private:
        int i;
};
class S:public F{
    public:
        void print(){cout<<"printS\n";}
};

int main()
{
    F * pf = new S;
    pf->print();    // 只调用了派生类对象的同名函数
    return 0;
}
