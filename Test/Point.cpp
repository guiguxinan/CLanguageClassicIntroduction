#include <iostream>

using namespace std;
/*2.��Ʋ�ʵ�ֶ�ά����ϵ�µ���� Point�����ÿ�������кᡢ�����ꡣΪ�� Point��ӱ�Ҫ�ļ��㺯����
���磬��������㵽(0.0)�ľ��룬������������ľ��룬�жϸ�����3�����Ƿ��ܹ���һ�������εȡ�*/
class Point{
    private:
        double x;   // ��������
        double y;   // ��������
    public:
        Point();
        Point(double,double);
        void setXy(Point);
        void setXy(double,double);
        void setX(double);
        void setY(double);
        int getX();
        int getY();
        void getXy();
        void toOrinDistence();
        void TwoPointDistence();
        void whetherTriangle();
};
// ���캯������
Point::Point(double x1,double y1){
    x = x1;
    y = y2;
}
// ���󴫲�
void Point::setXy(Point p1){
    return;
}
// ����x��y
void Point::setXy(double x2,double y2){
    x = x2;
    y = y2;
    return;
}
// ����x����
void Point::setX(double x3){
    x = x3;
    return;
}
// ����y����
void Point::setY(double y3){
    y = y3;
    return;
}
// ��ȡx����
int Point::getX(){
    return x;
}
// ��ȡy����
int Point::getY(){
    return y;
}
// ���x��y������
void Point::getXy(){
    cout<<"x:"<<x<<", y:"<<y<<endl;
}

// ��������㵽(0.0)�ľ���
void Point::toOrinDistence(){

}

// ������������ľ���
void TwoPointDistence(){

}

// �жϸ�����3�����Ƿ��ܹ���һ��������
void whetherTriangle(){
    
}

int main()
{

    return 0;
}
