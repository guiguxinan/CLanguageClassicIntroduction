#include <iostream>

using namespace std;

class Human
{
    public:
    int weight;
};

int main()
{
    Human jack;
    jack.weight = 65;
    cout<<"jack������Ϊ��"<<jack.weight<<endl;
    Human tom;
    tom.weight = 70;
    cout<<"tom������Ϊ��"<<tom.weight<<endl;
    return 0;
}
