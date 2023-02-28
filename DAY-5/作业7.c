 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印给定行数的乘法表
void S(int l)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= l; i++)
	{
		for (j = 1; j <= i; j++)
		{
			int d = j * i;
			printf("%d * %d = %d ", j, i, d);
		}
		printf("\n");
	}
}

void squ()
{
	int line = 0;
	printf("请输入要打印的行数：\n");
	scanf("%d", &line);
	S(line);
}

//交换俩数
int Swap(int* pm, int* pn)
{
	int t = 0;
	t = *pm;
	*pm = *pn;
	*pn = t;
}

void swap()
{
	int m = 0;
	int n = 0;
	printf("请输入要交换的数字：");
	scanf("%d %d", &m,&n);
	Swap(&m, &n);
	printf("\n%d %d", m, n);
}

//判断闰年并打印
int judge(y)
{
	return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
}
void is_leap_year()
{
	int year = 0;
	while ((scanf("%d", &year) != EOF))
	{
		if (judge(year))
			printf("%d是闰年。\n", year);
		else
			printf("%d不是闰年。\n", year);

	}
}

//判断是不是素数
int  JUD(int m)
{
	int a = 0;
	for (a = 2; a < m; a++)
	{
		if (m % a == 0)
		{
			break;
		}
	}
	if (a == m)
		return 1;
	else
		return 0;
}

void num()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (JUD(i))
		{
			printf("%d是素数。 ", i);
			count++;
		}
	}
	printf("\ncount=%d", count);
}


//int main()
//{
	//squ();
	//swap();
	//is_leap_year();
	//num();
	//return 0;
//}