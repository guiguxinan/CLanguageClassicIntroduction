#include <iostream>
#include <locale>           //setlocale函数在locale头文件中定义
using namespace std;
int main()
{
	//使用setlocale函数将本机的语言设置为中文简体
	//LC_ALL表示设置所有的选项（包括金融货币、小数点，时间日期格式、语言字符串的使用习惯等），chs表示中文简体
	setlocale(LC_ALL, "chs");
	wchar_t wt[] = L"中国伟大复兴梦";   //大写字母L告诉编译器为"中"字分配两个字节的空间
	wcout << wt << endl;               //使用wcout来代替cout输出宽字符
	return 0;
}