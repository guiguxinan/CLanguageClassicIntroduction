#include <iostream>

using namespace std;
class Person{
private:
    /* data */
public:
    void print(){cout<<"Person基类函数\n";}
};
class Fa:virtual public Person{
    public:
    void print(){cout<<"Fa类函数\n";}
};

class Mo:virtual public Person{
    public:
    void print(){cout<<"Mo类函数\n";}
};

class Son:public Person,public Mo{
    public:
    void print(){cout<<"Son类函数\n";}
};

int main()
{
    /*虚基类避免两义性
        virtual，派生类中进行说明
    */ 
    Son s;
    s.print();
    Mo m;
    m.print();
    Fa f;
    f.print();
    return 0;
}
