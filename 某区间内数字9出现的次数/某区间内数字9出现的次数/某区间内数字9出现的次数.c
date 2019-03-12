#include<stdio.h>
#include<stdlib.h>
int main()
{
	int temp,count=0;//count用来计数
	for (int i = 1; i < 100; i++)
	{
		temp = i;
		if (temp == 9)//如果它等于9，就让计数器count+1；
		{
			count++;
		}
		//i>10的情况，提取出每一位进行比较
		else if(temp%10==9)//提取个位
		{
			count++;				
		}
		temp = temp / 10;//提取十位
		if (temp == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}