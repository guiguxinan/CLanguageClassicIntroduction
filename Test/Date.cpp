#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Date{
    /*Date类*/
    public:
        Date();
        Date(int);
        Date(int,int);
        Date(int,int,int);
        Date(const Date &d);
        ~Date();
        void setDate(int,int,int);
        void setDate(Date);
        Date getDate();
        void setYear(int);
        int getMonth();
        void printDate() const;
    private:
        int year,month,day;
};
Date::Date(){
    year = 1970;
    month = 1;
    day = 1;
    cout<<"Date默认构造函数\n";
}
Date::Date(int y){
    year = y;
    month = 1;
    day = 1;
    cout<<"Date带1个参数的构造函数\n";
}
Date::Date(int y,int m){
    year = y;
    month = m;
    day = 1;
    cout<<"Date带2个参数的构造函数\n";
}
Date::Date(int y,int m,int d){
    year = y;
    month = 1;
    day = 1;
    cout<<"Date带3个参数的构造函数\n";
}
Date::Date(const Date &d){  // 初始化复制构造函数
    year = d.year;
    month = d.month;
    day = d.day;
    cout<<"Date的复制构造函数\n";
}
Date::~Date(){
    cout<<"Date的析构函数\n";
}

void Date::setDate(int y,int m,int d){
    year = y;
    month = m;
    day = d;
    return;
}

void Date::setDate(Date d){
    year = d.year;
    month = d.month;
    day = d.day;
    return;
}

Date Date::getDate(){
    Date d;
    d.year = year;
    d.month = month;
    d.day = day;
    return d;
}

void Date::setYear(int y){
    year = y;
    return;
}

int Date::getMonth(){
    return month;
}

void Date::printDate() const{
    cout<<year<<"/"<<month<<"/"<<day<<endl;
    return;
}

class CStudent{
    public:
        CStudent();
        CStudent(string,Date);
        ~CStudent();
        void setStudent(string, Date);
        void setName(string);
        string getName();
        void setBirthday(Date);
        Date getBirthday();
        void printInfo() const;
    private:
        string name;
        Date birthday;
};

CStudent::CStudent():name("NoName"),birthday(Date()){
    cout<<"CStudent默认构造函数。\n";
}

CStudent::CStudent(string n,Date d){
    name = n;
    birthday = d;
    cout<<"CStudent有参构造函数\n";
}

CStudent::~CStudent(){
    cout<<"CStudent析构函数\n";
}

void CStudent::setStudent(string s, Date d){
    name = s;
    birthday = d;
    return;
}

void CStudent::setName(string s){
    name = s;
    return;
}

string CStudent::getName(){
    return name;
}

void CStudent::setBirthday(Date d){
    birthday = d;
    return;
}

Date CStudent::getBirthday(){
    return birthday;
}

void CStudent::printInfo() const{
    cout<<"姓名："<<name<<"\t生日：";
    birthday.printDate();
    cout<<endl;
}

int main()
{
   CStudent cs("张三",Date());
   return 0;
}
