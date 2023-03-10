#include <iostream>

using namespace std;

class MyDate{
    public:
        //  ???????????
        MyDate();
        MyDate(int,int,int);
        void printDate();
    private:
        int year,month,day;
};
// ????????????????
MyDate::MyDate(){   
    year = 2018;
    month = 7;
    day = 1;
}

MyDate::MyDate(int y, int m, int d){
    year = y;
    month = m;
    day = d;
}
void MyDate::printDate(){
    cout<<"??????"<<year<<"-"<<month<<"-"<<day<<endl;
}


int main()
{
    MyDate md;
    md.printDate();
    MyDate ma(2023,2,13);
    ma.printDate();
    return 0;
}