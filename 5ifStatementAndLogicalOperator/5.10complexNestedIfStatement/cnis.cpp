#include <iostream>

using namespace std;

int main()
{
   /*
   嵌套if语句
   使用嵌套if语句编写如下：
   定义整型变量x，
   如果x大于等于1，并且x等于1时输出“您输入了1！”
   如果x大于1，并且x大于100时输出“您输入了一个大于100的数。”
   如果x小于1，输出“您输入的数小于1！”
   x>1,x<100,输出“您输入的数大于1，小于100！”
   */
  int x;
  cout<<"请输入x的值：\n";
  cin>>x;
  if (x >= 1)
  {
    if (x == 1)
        cout<<"您输入的数等于1！\n";
    else
    {
        if (x > 100)
            cout<<"您输入的数大于100！\n";
        else if (x == 100)
            cout<<"您输入的数等于100！\n";
        else
            cout<<"您输入的数大于1且小大100！\n";
    }
  }
  else
  {
    cout<<"您输入的数小于1！\n";
  }
   return 0;
}
