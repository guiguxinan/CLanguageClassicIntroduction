# include<stdio.h>

/*
常用转义序列
\n      换行
\r      回车键
\b      退后一格
\f      换页
\t      水平制表符
\v      垂直制表符
\a      发出鸣响
\?      插入问号？
\"      插入双引号"
\'      插入单引号'
\\      插入反斜杠\

*/

// 示例
int main(void)
{
    // printf("hi,David\nthis is printf message");  // 换行
    // printf("hi,David \tthis is printf message");  // 回车键(空格)
    // printf("hi,David  \bthis is printf message");  // 退后一格
    printf("\nBe careful!!!\a");  //发出鸣响
    return 0;
}