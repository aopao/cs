#include <stdio.h>

void main ()
{
	int i, j, k, N, m, n, t;                                   //��������
	int a[100], c[100], b[100]={0};
	
	printf("������һ��������:");                         //N��ʾ�������ݸ���
	scanf("%d",&N);
	printf("������ %d ������:",N);
	for (i=0; i<N; i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}

	for (i=1; i<N; i++)                                  //��c�����ݽ���ð������
	{
		for (j=0; j<N-1; j++)
			if (c[j]>c[j+1])
			{
				k=c[j];
				c[j]=c[j+1];
				c[j+1]=k;
			}
	}

	j=0,m=1;                                           //��b�����ݽ��б��
	for (i=0;i<N;i++)
	{
		n=0;                                           //n��ʾ�д�С��ͬ�����ĸ�����
		for (t=0;t<N;t++)
		{
			if (a[t]==c[j])
			{
				b[t]=m;
				n++;
			}
			if (t==N-1)
				m++;
		}
		j+=n;                                         //����a{t}���бȽϵ�j����
	}
	
	printf("�����������:\n");                        //���ݵ����
	for (i=0; i<N; i++)
		printf("%d   ",a[i]);
	printf("\n");
	printf("�������Ӧ�ı����:\n");
	for (i=0; i<N; i++)
		printf("%d   ",b[i]);
}

