#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo02.cpp
 * Time    :   2023/03/06 11:52:46
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   在派生类中增加函数，避免在父类中添加闲置虚函数
 *             使用RTTI的方法dynamic_case方法，该方法是硬性转换，不建议在多态性继承中使用
*/
class Father{
    public:
        Father(){cout<<"Father构造\n";}
        virtual ~Father(){cout<<"Father析构\n";}
        virtual void smart()const{cout<<"父亲很聪明\n";}
};

class Son:public Father{
    public:
        Son(){cout<<"Son构造\n";}
        void smart()const{cout<<"son很聪明\n";}
        void beautiful()const{cout<<"son很帅气\n";}
        ~Son(){cout<<"Son析构\n";}

};

int main()
{
    Father *f[5];   // 声明一个含有5个成员并指向父类的数组指针

    return 0;
}
