#include <iostream>
#include<string>

using namespace std;

class Course{
    public:
        void setCourse(double,double, string, string);
        void setCourse(double,double);
        void getCourse();
    private:
        string kecheng_name,zhuanye;
        double score,study_tiame;

};
void Course::setCourse(double s,double st, string k, string z){
    score = s;
    study_tiame = st;
    kecheng_name = k;
    zhuanye = z;
    return;
}

void Course::setCourse(double s,double st){
    score = s;
    study_tiame = st;
    return;
}

void Course::getCourse(){cout<<"学分："<<score<<", 学时："<<study_tiame<<", 课程名称："<<kecheng_name<<", 专业："<<zhuanye<<endl;}

int main()
{
   Course c1;
   c1.setCourse(98,100);
   c1.getCourse();
   Course c2;
   c2.setCourse(90,188,"c++","计算机科学与技术");
   c2.getCourse();
   return 0;
}
