#include<stdio.h>//��������������������Լ��
int main()
{
	int a, b,c;              //���������a��b
	int min;              //��Լ������Ҫ��������С��һ����ö��
	scanf_s("%d %d %d", &a,&b,&c);
	
		if (a < b)
		{
			if(a<c)
			{
				min = a;
			}else
			{
				min = c;
			}
		}
		else
		{
			if (b < c)
			{
				min = b;

			}
			else
			{
				min = c;
			}
		}
		int ret=0;
		int i;      //������
		for(i=1;i<=min;i++)    //����iΪ1��iС��min��������ѭ���壬
		{
			if (a % i == 0)     //�ж�a%i�Ƿ����0
			{
				if (b % i == 0)      //�ж�b%i����0��if{if}
				{
					if (c % i == 0)
					{
						ret = i;
					}
				}
			}
		} 
		printf("���Լ��Ϊ%d",ret);
}