#include <iostream>

using namespace std;

class Human
{
    /*
    私有成员变量（private）：私有成员变量不能被对象直接访问
    只能通过在类中设置的公有接口函数来访问
    */ 
    public:
    void setWeight(int w){weight = w;}   // 公有接口函数，参数w（int类型）将私有成员变量赋值给w
    int getWeight(){return weight;}  // 公有接口函数，获取weight值

    private:
    int weight;
};

int main()
{
    Human jack;
    jack.setWeight(65);
    cout<<"jack的体重为："<<jack.getWeight()<<endl;
    Human tom;
    tom.setWeight(70);
    cout<<"tom的体重为："<<tom.getWeight()<<endl;
    return 0;
}

