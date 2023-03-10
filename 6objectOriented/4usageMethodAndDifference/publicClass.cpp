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
    cout<<"jack的体重为："<<jack.weight<<endl;
    Human tom;
    tom.weight = 70;
    cout<<"tom的体重为："<<tom.weight<<endl;
    return 0;
}
