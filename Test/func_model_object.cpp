#include <iostream>
#include <string>
using namespace std;
/**
 * File    :   func_model_object.cpp
 * Time    :   2023/03/10 00:02:50
 * Author  :   Guiguxinan 
 * Version :   1.0
 * Desc    :   定义函数模板编写面向对象排序程序
*/
template <typename T>
int myCompare(const T &left,const T &right){
    if (left < right)
    {
        return -1;
    }else if (right < left)
    {
        return 1;
    }else
    {
        return 0;
    }
}
template <class T>
void Swap(T &x,T &y){
    T tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    string  arraylist[10] = {"shang","xia","zuo","you","qian","hou","dong","xi","nan","bei"};
    int  j;
    string temp;
    for (int i = 0; i < 10; i++)
    {
        j=i;
        while (j>0 && myCompare<string>(arraylist[j-1],arraylist[j])>0)
        {
            Swap(arraylist[j-1],arraylist[j]);
            j--;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arraylist[i]<<endl;
    }
          
    return 0;
}
