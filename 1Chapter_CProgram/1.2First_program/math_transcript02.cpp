#include<iostream>
int main()
{
    using  std::cout;
    using  std::endl;    // endl：换行符，调用flush函数刷新缓存区
    cout<<"五年级一班数学成绩表\n";
    cout<<"第一名同学a的成绩：\t"<<100;
    cout<<endl;
    cout<<"第二名同学b的成绩：\t"<<90+9;
    cout<<endl;
    cout<<"第三名同学c的成绩：\t"<<(double)89/8;
    return 0;
}