#include <iostream>

using namespace std;
/*多重继承*/
class Father{
    private:
        double tall;
    public:
        void setTall(double t){tall=t;}
        void print01(){cout<<"身高："<<tall<<endl;}
};
class Mother{
    private:
        double weight;
    public:
        void setWeight(double w){weight=w;}
        void print02(){cout<<"体重："<<weight<<endl;}
};
class Son:public Father,public Mother{
    private:
        int age;
    public:
        void setAge(int a){age=a;}
        void print03(){print01();print02();cout<<"年龄："<<age<<endl;}
};
int main()
{
    Son s;
    s.setTall(185.5);
    s.setWeight(78);
    s.setAge(24);
    s.print03();
    
    return 0;
}
