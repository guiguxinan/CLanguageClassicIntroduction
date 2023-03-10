#include <string>
#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main()
{
    string strOutput = "Hello World";
 
    cout << "[cout] strOutput is: " << strOutput << endl;
 
    // string 转换为 char*
    const char* pszOutput = strOutput.c_str();
    
    printf("[printf] strOutput is: %s\n", pszOutput);
 
    return 0;
}
