#include<stdio.h>
#include<stdlib.h>
int main()
{
	int temp,count=0;//count��������
	for (int i = 1; i < 100; i++)
	{
		temp = i;
		if (temp == 9)//���������9�����ü�����count+1��
		{
			count++;
		}
		//i>10���������ȡ��ÿһλ���бȽ�
		else if(temp%10==9)//��ȡ��λ
		{
			count++;				
		}
		temp = temp / 10;//��ȡʮλ
		if (temp == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}