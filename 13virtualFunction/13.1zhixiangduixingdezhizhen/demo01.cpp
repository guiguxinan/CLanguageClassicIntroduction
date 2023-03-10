#include <iostream>
#include <string>

using namespace std;

class F{
    public:
        F(){i = 1;}
        void printF(){cout<<"printF\n";}
        int getI(){
            return i;
        }
    private:
        int i;
};
class S:public F{
    public:
        void printS(){cout<<"printS\n";}
};

int main()
{
    F *pf = new S; // 创建派生类对象pf赋给基类指针
    pf->printF();
    cout<<pf->getI()<<endl;
    delete pf;
    /*
    创建派生类对象pf赋给基类指针：
    优点：
        可直接使用基类指针调用基类公有成员函数
    缺点：
        不可以访问派生类成员函数（解决办法：在基类函数前加virtual，详见demo02）    
    */
    return 0;
}
