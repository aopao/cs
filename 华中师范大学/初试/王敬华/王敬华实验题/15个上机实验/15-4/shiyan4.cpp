#include <stdio.h>
#include <math.h>
                                                    //��ΪҪ�õ�����������
void main()
{
	int i,j,p,k,flag,sum;                                               //p���Լ��������ĸ���
	int a[2000]={0},b[2000]={0};                                     //a[2000]���������b[2000]��Ų�ֵ��

	//��2000���ڵ�����������a[]�ڣ������
	printf("2000���ڵ�������:\n");
	for(p=1,i=3;i<2000;i++)
	{
		flag=1;
		for(j=2;j<sqrt(i)+1;j++)                     //�жϸ����Ƿ�Ϊ����
		{
			if(i%j==0)
				flag=0;
		}
		if(flag==1)
		a[p++]=i;
	}
	a[0]=2;

	//������������ǰ�����b[]�ڣ������
	for(i=0;i<p;i++)
	{
		if (i%13==0)
			printf("\n");
		printf("%-6d",a[i]);
	}
	printf("\n\n����������= %d \n\n",p);
	printf("�������Ϊ:\n");
	for(i=0;i<p-1;i++)
	{
		b[i]=a[i+1]-a[i];
		if (i%13==0)
			printf("\n");
		printf("%-6d",b[i]);
	}
	printf("\n\n");

	//�ҳ�b�������͵���1898�����
	k=0;
    printf("�ӵ�Xλ����Xλ��֮��Ϊ1898�������:\n\n");
	for(i=0;i<p-1;i++)
	for(j=i,sum=0;j<p-1&&sum<1898;j++)
	{
		sum+=b[j];
		if(sum>1898)
			break;
		if(sum==1898)
		{
			//����һ���Ҫ�ɲ�Ҫ
			printf("�ڵڶ������г�ʼλ���ǵ�%dλ  --  ����λ���ǵ�%dλ\n\n",i+1,j+1);
			k++;
		}
	}
	printf("�ܹ��� %d �����\n",k);
}