#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   demo01.cpp
 * Time    :   2023/03/06 12:21:26
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   多重继承中初始化构造函数参数
*/
class Father{
    public:
        Father(double height);
        virtual ~Father(){cout<<"析构Father\n";}
        virtual void smart(){cout<<"父亲很聪明！\n";}
        virtual int getHeight()const{return itsHeight;}
    private:
        double itsHeight;
};

Father::Father(double height):itsHeight(height){
    cout<<"构造父亲\n";
}

class Mother{
    public:
        Mother(bool sex);
        virtual ~Mother(){cout<<"析构Mother！\n";}
        virtual void beautiful(){cout<<"母亲很漂亮！\n";}
        virtual int getSex(){return itsSex;}
    private:
        bool itsSex;
};

Mother::Mother(bool sex):itsSex(sex){
    cout<<"构造母亲\n";
}

class Son:public Father,public Mother{
    public:
        ~Son(){cout<<"析构Son\n";}
        Son(double,bool,int);
        virtual int getAge()const{return age;}
    private:
        int age;
};

Son::Son(double height,bool sex,int a):Father(height),Mother(sex),age(a){
    cout<<"构造son\n";
}

int main()
{
    // 在堆中创建一个son类带参(5，true，3)对象，并声明一个指针ps指向这个内存空间
    Son *ps = new Son(145,true,13);
    // 用指针ps访问母亲类beautiful函数
    ps->beautiful();
    // 用指针ps访问父亲类smart函数
    ps->smart();
    cout<<"son的体重为："<<ps->getHeight()<<"cm\t";
    if (ps->getSex())
    {
        cout<<"性别：男\t";
    }else
        cout<<"性别：女\t";
    cout<<"son的年龄为："<<ps->getAge()<<endl;
    delete ps;
    system("pause");
    return 0;
}
