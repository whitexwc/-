#include<cstdio>
int main()
{
    int a=12345,b=134394;
    float c=1.23456;
    printf("%%\\");//测试输出“%”和”\“
    printf("\n%6d\n%6d",a,b);//测试右对齐，不足位数用空格自动补齐
    printf("\n%06d\n%06d\n",a,b);//测试右对齐，不足位数用0自动补齐
    printf("%.3f",c);//测试保留有效数字
    return 0;
}
