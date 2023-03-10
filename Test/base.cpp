#include <iostream>

using namespace std;
class base
{
private:
    int m;
public:
    base(/* args */){}
    base(int a):m(a){}
    int get(){
        return m;
    }
    void set(int a){
        m =a;
    }
};

int main()
{
    base *ptr = new base[2];        
    ptr->set(30);   // 0xec4c20 m=30
    ptr = ptr+1;    // 0xec4c24
    ptr->set(50);   // m = 50
    base a[2] = {1,9};
    cout<<a[0].get()<<","<<a[1].get()<<endl;
    cout<<ptr->get()<<",";
    ptr = ptr - 1;
    cout<<ptr->get()<<endl;
    delete []ptr;
    return 0;
}
