#include <iostream>

using namespace std;
class Test{
    public:
    
    int func01(int a, int *b,int *c){
        /*让函数返回多个值*/
        cout<<"func函数中，计算前：\n";
        cout<<"a:"<<a<<endl<<"b:"<<*b<<endl<<"c:"<<*c<<endl;
        a = a + 1;
        *b = (*b) * (*b);
        *c = (*c) * (*c) * (*c);
        cout<<"func函数中，计算后：\n";
        cout<<"a:"<<a<<endl<<"b:"<<*b<<endl<<"c:"<<*c<<endl;
        return a;
    }
    int func02(int x,int &y,int &z){
        /*返回多个值并将其中一个作为判断值
            x作为圆的半径和正方形的边长
            *y为圆的面积，*z为正方形的面积*/ 
        if(x>20000)
        x = 1;
        else{
            y = x * x * 3.14;
            z = x * x;
            x = 0;
        }
        return x;
    }


};

int main()
{
    Test t1;
    int a=1,b=2,c=3;
    cout<<"主程序,调用func函数前...\n";
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl<<"c:"<<c<<endl;
    t1.func01(a,&b,&c);
    cout<<"主程序,调用func函数后...\n";
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl<<"c:"<<c<<endl;
    cout<<"\n==================================================\n";

    Test t2;
    int x,y,z;
    int check;
    cout<<"请输入一个数字作为圆的半径和正方形的边长：\n";
    cin>>x;
    check = t2.func02(x,y,z);
    if(check){
        cout<<"输入的数字超出计算范围！\n";
    }else{
        cout<<"圆的面积为："<<y<<endl;
        cout<<"正方形的面积为："<<z<<endl;
    }
    return 0;
}


