#define _CRT_SECURE_NO_WARNINGS 1

//��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ����


#include<stdio.h>
int main()
{
    long a, b, c, d, e, x;
    scanf("%ld", &x);
    a = x / 10000;/*�ֽ����λ*/
    b = x % 10000 / 1000;/*�ֽ��ǧλ*/
    c = x % 1000 / 100;/*�ֽ����λ*/
    d = x % 100 / 10;/*�ֽ��ʮλ*/
    e = x % 10;/*�ֽ����λ*/
    if (a != 0) printf("there are 5, %ld %ld %ld %ld %ld\n", e, d, c, b, a);
    else if (b != 0) printf("there are 4, %ld %ld %ld %ld\n", e, d, c, b);
    else if (c != 0) printf(" there are 3,%ld %ld %ld\n", e, d, c);
    else if (d != 0) printf("there are 2, %ld %ld\n", e, d);
    else if (e != 0) printf(" there are 1,%ld\n", e);
    return 0;
}




//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ


#include<stdio.h>
int main()
{
    long ge, shi, qian, wan, x;
    scanf("%ld", &x);
    wan = x / 10000;
    qian = x % 10000 / 1000;
    shi = x % 100 / 10;
    ge = x % 10;
    if (ge == wan && shi == qian)/*��λ������λ����ʮλ����ǧλ*/
        printf("this number is a huiwen\n");
    else
        printf("this number is not a huiwen\n");
    return 0;
}



//gotoxy()��clrscr()����������


#include "conio.h"
#include "stdio.h"
void main(void)
{
    clrscr();/*��������*/
    textbackground(2);
    gotoxy(1, 5);/*��λ����*/
    cprintf("Output at row 5 column 1\n");
    textbackground(3);
    gotoxy(20, 10);
    cprintf("Output at row 10 column 20\n");
    getch();
}



//��һ��3*3����Խ���Ԫ��֮��


#include "stdio.h"
#include "conio.h"
/* ���ʹ�õ���TCϵ�б������������Ҫ����¾� */
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
