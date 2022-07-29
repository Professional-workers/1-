#include<stdio.h>//输入两个整数，输出最大公约数
int main()
{
	int a, b,c;              //定义变量，a，b
	int min;              //公约数，需要用其中最小的一个来枚举
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
		int i;      //计数，
		for(i=1;i<=min;i++)    //定义i为1，i小于min，就运行循环体，
		{
			if (a % i == 0)     //判断a%i是否等于0
			{
				if (b % i == 0)      //判断b%i等于0，if{if}
				{
					if (c % i == 0)
					{
						ret = i;
					}
				}
			}
		} 
		printf("最大公约数为%d",ret);
}