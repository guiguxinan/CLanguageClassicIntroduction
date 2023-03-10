#include <iostream>
#include <string>

using namespace std;
class F{
    protected:
        string name;
        int age;
    public:
        F(string,int);
        F(){cout<<"构造基类\n";}
        void printF(){cout<<"姓名为："<<name<<", 年龄为："<<age;}
        ~F(){cout<<"释放基类对象\n";}
};
F::F(string n,int a){
    cout<<"在基类的构造函数内。\n";
    name = n;
    age = a;
    cout<<"离开基类构造函数\n";
}

class S:public F{
    private:
        double tall;
    public:
        S(string,int,double);
        void printS(){F::printF();cout<<"身高为："<<tall<<endl;}
        ~S(){cout<<"释放子类对象\n";}
};
S::S(string n,int a,double t):F(n,a){   // 调用基类构造函数，传值后初始化子类对象
    cout<<"在子类构造函数内\n";
    tall = t;
    cout<<"离开子类构造函数。\n";
}
int main()
{
   S s("zx",18,160);
   s.printS();
   /*
    在基类的构造函数内。
    离开基类构造函数
    在子类构造函数内
    离开子类构造函数。
    姓名为：zx, 年龄为：18身高为：160
    释放子类对象
    释放基类对象

    S::S(string n,int a,double t):F(n,a)
    传值方法优点：
    1.避免子类初始化时重复定义变量

    注意:
    1.如果没有定义派生类的构造函数,那么将默认执行基类的构造函数。
    2.如果派生类要向基类传递参数,那么必须在派生类中定义一个构造函数,该函数只起传参作用
    3.如果只需要调用基类的构造函数,不用向基类传递参数的话,那么派生类不用定义构造函数
   */
   return 0;
}
