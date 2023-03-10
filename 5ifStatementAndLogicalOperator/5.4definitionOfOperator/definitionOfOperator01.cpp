#include <iostream>

using namespace std;

int main()
{
   /*
   赋值运算符和数学运算符的联合
   加等 +=
   减等 -=
   乘等 *=
   除等 /=
   模等 %=
   */
    int a=10;
    a+=1;
    cout<<"加等"<<a<<endl;
    a-=1;
    cout<<"减等"<<a<<endl;
    a *= 3;
    cout<<"乘等"<<a<<endl;
    a /= 4;
    cout<<"除等"<<a<<endl;
    a %= 5;
    cout<<"模等"<<a<<endl;

    return 0;
}
