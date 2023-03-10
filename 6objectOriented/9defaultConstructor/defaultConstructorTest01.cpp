#include <iostream>

using namespace std;

/*默认构造函数：
    假如无法确定所要创建的长方形的长和宽,也就是说我们不提供构造函数,那么系统会自动创建一个构造函数,该函数没有参数,
    而且也不执行任何功能,它只用于构造一个对象。如:rectangle(){}
*/
class rectange
{
public:
/*一般来说,只要我们不创建任何构造函数,那么系统就会为我们创建这个什么功能都没有的默认构造函数,
而一旦我们创建了一个构造函数,则这个默认构造函数就会被自动屏蔽。
假如我们创建了带参数的构造函数后,又想要一个不带参数的样沟造函数,那么就必须自己
再创建一个,如: rectange(){cout<<"我是新创建的默认构造函数!";}*/
    rectange(){cout<<"\n我是新创建的默认构造函数!\n";}
    rectange(int l,int w){length=l,width=w;}  
    // 返回面积  
    int area(){return length*width;}    
private:
    double length,width;
};

int main()
{   
    rectange a(3,4);
    rectange b;
    cout<<"a的面积为："<<a.area();
    

}
