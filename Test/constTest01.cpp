#include <iostream>

using namespace std;
/*调用常量成员函数和普通成员函数*/
class Sample{
    public:
        Sample();
        void getValue()const;
        void getValue();
        void priValue();
        void priVcon()const;
};
Sample::Sample(){}
void Sample::getValue()const{
    cout<<"常量成员函数。。"<<endl;
}
void Sample::getValue(){
    cout<<"普通成员函数。。"<<endl;
}

void Sample::priValue(){
    cout<<"非常量成员函数"<<endl;
}
void Sample::priVcon()const{
    cout<<"常量成员函数"<<endl;
}
int main()
{
    const Sample cosa;  // 常量对象
    Sample s;
    cout<<"cosa:"<<endl;
    cosa.getValue();    
    // cosa.priValue();// 常量对象不能调用非常量成员变量
    cosa.priVcon();
    cout<<"s:"<<endl;
    s.getValue();
    s.priValue();
    return 0;
}
