#define _CRT_SECURE_NO_WARNINGS 1

//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字


#include<stdio.h>
int main()
{
    long a, b, c, d, e, x;
    scanf("%ld", &x);
    a = x / 10000;/*分解出万位*/
    b = x % 10000 / 1000;/*分解出千位*/
    c = x % 1000 / 100;/*分解出百位*/
    d = x % 100 / 10;/*分解出十位*/
    e = x % 10;/*分解出个位*/
    if (a != 0) printf("there are 5, %ld %ld %ld %ld %ld\n", e, d, c, b, a);
    else if (b != 0) printf("there are 4, %ld %ld %ld %ld\n", e, d, c, b);
    else if (c != 0) printf(" there are 3,%ld %ld %ld\n", e, d, c);
    else if (d != 0) printf("there are 2, %ld %ld\n", e, d);
    else if (e != 0) printf(" there are 1,%ld\n", e);
    return 0;
}




//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同


#include<stdio.h>
int main()
{
    long ge, shi, qian, wan, x;
    scanf("%ld", &x);
    wan = x / 10000;
    qian = x % 10000 / 1000;
    shi = x % 100 / 10;
    ge = x % 10;
    if (ge == wan && shi == qian)/*个位等于万位并且十位等于千位*/
        printf("this number is a huiwen\n");
    else
        printf("this number is not a huiwen\n");
    return 0;
}



//gotoxy()与clrscr()函数　　　


#include "conio.h"
#include "stdio.h"
void main(void)
{
    clrscr();/*清屏函数*/
    textbackground(2);
    gotoxy(1, 5);/*定位函数*/
    cprintf("Output at row 5 column 1\n");
    textbackground(3);
    gotoxy(20, 10);
    cprintf("Output at row 10 column 20\n");
    getch();
}



//求一个3*3矩阵对角线元素之和


#include "stdio.h"
#include "conio.h"
/* 如果使用的是TC系列编译器则可能需要添加下句 */
static void dummyfloat(float* x) { float y; dummyfloat(&y); }
main()
{
    float a[3][3], sum = 0;
    int i, j;
    printf("please input rectangle element:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%f", &a[j]);
    for (i = 0; i < 3; i++)
        sum = sum + a;
    printf("duijiaoxian he is %6.2f", sum);
    getch();
}
