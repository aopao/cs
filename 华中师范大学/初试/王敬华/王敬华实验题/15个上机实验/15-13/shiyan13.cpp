#include <stdio.h>

int jisuan (int m,int n);                                  //���ڼ��������������Լ��

void main ()
{
	int a,b,c,k;
	printf("����������������:");
	scanf("%d%d",&a,&b);
	
	//�Ƚ��������ݴ�С���ѽϴ�����ֵ��a
	if (a<b)
	{
		c=b;
		b=a;
		a=c;
	}
	k=jisuan (a,b);
	printf("�����������ֵ����Լ����: %d \n",k);
}

//�������Լ��
int jisuan (int m,int n)
{
	int t;
	while(n!=0)
	{
		t=m%n;
		m=n;
		n=t;
	}
	return (m);                          //�����Լ������
}
