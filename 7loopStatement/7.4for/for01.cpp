#include <iostream>

using namespace std;

int main()
{
    /*由于while限定循环次数过于复杂，使用for循环更加方便*/
    int count;
    cout<<"你想看几次？\n";
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        cout<<"看孙子兵法，品启强人生！\n";
    }
    
    return 0;
}
