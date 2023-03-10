#include <iostream>

using namespace std;
class Father{
    protected:
        double height;
        int age;
    public:
        void setH(double h){height=h;}
        void setAge(int a){age=a;}
        void printF(){cout<<"身高："<<height<<"cm, 年龄："<<age<<endl;}
};
class Son:public Father{
    private:
        double weight;
        double lengthArm;
    public:
        void setW(double w){weight=w;}
        void setLa(double l){lengthArm=l;}
        void printS(){cout<<"身高："<<height<<"cm，年龄："<<age<<"岁，体重："<<weight<<"kg，臂长："<<lengthArm<<endl;}
};
int main()
{
   /*继承的种类和语法
   单一继承：只有一个基类
   多重继承:拥有多个基类
   声明语法：class 子类:public 父类     // public表示派生类型为公有，也可声明为private

    单一继承一般形式：
    关键字calss 派生类名:派生类型public/private 基类{
        private:
        
        public:
    }
   */
    Father f;
    f.setAge(32);
    f.setH(176.5);    
    f. printF();
    Son s;
    s.setAge(18);
    s.setH(185.4);
    s.setLa(185);
    s.setW(78);
    s.printS();
    /*
    派生类直接访问基类的私有成员变量会报错
    解决办法：给基类私有成员变为protected：其他类无法访问父类protected：成员变量，派生类可以
    */
    return 0;
}
