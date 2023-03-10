# include<iostream>
using namespace std;

int main()
{
    char *A;
    int n;
    cout<<"输入n的值:\n";
    cin>>n;
    A = new char[n];
    cout<<"输入"<<n<<"个字符串"<<endl;
    for (int i = 0; i <= n; i++)
    {
        cin>>A[i];
        
    }
    cout<<"输入字符串：\n";
    for (int i = 0; i <= n; i++)
    {
        /* code */
        cout<<A[i];
    }
    
        
    return 0;
}