#include <iostream>

using namespace std;

/*声明一个类*/
class Human //  class 类名
{
    public: //  共有属性
        void getStature()
        {
            // 函数获得身高
            cout<<stature<<endl;
        }  
        void getWeight();   // 方法获得体重
    // private:    // 私有属性
        double stature=171.12; // 变量身高
        double weight=52;  // 变量体重int
};

int main()
{
    /*
    类和对象的区别：
        类是一个抽象的名词，是对象的集合，对象则是实际的个体。
    */
    // 定义一个对象
    Human jack; // 类名 对象名
    /*
    对象和成员的关系：
    定义的对象可以使用.来访问类中的成员
    */
    jack.getStature();
    return 0;
}
