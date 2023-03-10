#include <iostream>

using namespace std;

class Quote{
    public:
    void getQuote01(){
        /*引用：
            变量的别名  符号 &r
            int &ra = a;
            a是整型变量a的别名,这样,对a的操作实际就是对a的操作。
            这里要注意的是,别名a前面的符号&不是取址运算符,而是引用运算符。虽然它们符号相同,但是功能却不一样。
        */ 
        int a;
        int &ra = a;
        a = 999;
        cout<<"&ra:"<<ra<<endl;
        ra = 0;
        cout<<"a:"<<a<<endl;
    }

    void QuoteAddress(){
        int a;
        int &ra = a;
        cout<<"&a:"<<&a<<endl;
        cout<<"&ra:"<<&ra<<endl;
    }

    void getQuote02(){
        /*引用就像中国古代的女人一样,一旦嫁给某人,就要跟他一辈子,因此假如你定义了某个变量的别名,
        那么该别名就永远属于这个变量,它会忠心耿耿地跟随该变量,即使中间有别的变量来收买它,它也不会更换自己的主人。
        不过它会收下该变量的金钱,从而导致它的主人也被牵连。*/
        int a=999,b=888;
        int &ra = a;
        cout<<"&a:"<<&a<<endl;
        cout<<"&ra:"<<&ra<<endl;
        ra = b;
        cout<<"\n&a:"<<&a<<endl;
        cout<<"&ra:"<<&ra<<endl;
        cout<<"&b:"<<&b<<endl;
        cout<<"a:"<<a<<endl;    // 888
        cout<<"ra:"<<ra<<endl;  // 888
        cout<<"b:"<<b<<endl;    // 888
        ra = 1;
        cout<<"\na:"<<a<<endl;  // 1
        cout<<"ra:"<<ra<<endl;  // 1
        cout<<"b:"<<b<<endl;    // 888
    }
    void getQuote03(){
        cout<<"引用对象\n";
    }
};

int main()
{
    Quote q1;
    // 引用定义
    cout<<"引用的定义：\n";
    q1.getQuote01();
    cout<<"\n************************************\n";
    // 引用的地址
    cout<<"引用的地址:\n";
    q1.QuoteAddress();
    cout<<"\n************************************\n";
    // 引用就是别名常量
    cout<<"引用,别名常量:\n";
    q1.getQuote02();
    cout<<"\n************************************\n";
    // 引用对象
    cout<<"引用对象：\n";
    Quote q2;
    Quote &rq2 = q2;    // 定义q2对象的别名rq2
    rq2.getQuote03();
    cout<<"\n************************************\n";
    // 空引用
    cout<<"空引用：\n";
    cout<<"指针进行删除操作后,需要将它们赋为空,引用却不需要这么做,这是因为引用是原来对象的别名,假如该对象存放在栈中,那么在对象超出作用域时别名会和对象一起消失。假如该对象存放在堆中,由于堆中内存空间必须使用指针来访问,目因此用不着别名,即使再定义一个该指针的别名,那么将指针删除并赋空之后,该指针的别名中的地址也相应的赋空了。";
    return 0;
}
