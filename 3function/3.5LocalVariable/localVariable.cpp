# include<iostream>
using namespace std;
/*
局部变量：函数内部声明的变量为局部变量
*/
void show(int, int);
int main()
{
    int x = 3, y = 5;
    cout<<"在main函数中调用show函数之前x的值为："<<x<<"，y的值为："<<y<<endl;
    show(x, y);
    cout<<"在main函数中调用show函数之后x的值为："<<x<<"，y的值为："<<y<<endl;
}

void show(int x, int y)
{
    cout<<"在函数show中调用show函数之前x的值为："<<x<<"，y的值为："<<y<<endl;
    int z;
    z = x;
    x = y;
    y = z;
    cout<<"在函数show中调用show函数之后x的值为："<<x<<"，y的值为："<<y<<endl;
}

/*
打印结果：
在main函数中调用show函数之前x的值为：3，y的值为：5
在函数show中调用show函数之前x的值为：3，y的值为：5
在函数show中调用show函数之后x的值为：5，y的值为：3
在main函数中调用show函数之后x的值为：3，y的值为：5
*/