#include <iostream>

using namespace std;

class f{
    private:
    int x,y;
    public:
    f1(){
        x = 10;
        y = 10;
    }
    print(){
        cout<<x<<","<<y<<endl;
    }
};

int main()
{
   f a;
   a.print();
   return 0;
}
