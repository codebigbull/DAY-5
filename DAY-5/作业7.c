 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ӡ���������ĳ˷���
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
	printf("������Ҫ��ӡ��������\n");
	scanf("%d", &line);
	S(line);
}

//��������
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
	printf("������Ҫ���������֣�");
	scanf("%d %d", &m,&n);
	Swap(&m, &n);
	printf("\n%d %d", m, n);
}

//�ж����겢��ӡ
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
			printf("%d�����ꡣ\n", year);
		else
			printf("%d�������ꡣ\n", year);

	}
}

//�ж��ǲ�������
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
			printf("%d�������� ", i);
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