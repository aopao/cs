#include <stdio.h>
#include <string.h>

void leftTrim (char str[]);

void main ()
{
	int i,j;
	char *p,*q;
	char a[6];

	for (i=0;i<=200;i++)
	{
		j=i*i;
		sprintf(a,"%5d",j);                                   //��jת�����ַ���
		leftTrim (a);
		//��pָ���һ������
		p=&a[0];
		//��qָ�����һ������
		q=p+strlen (a)-1;
		
		while (*p==*q&&p<=q)
		{
			p++;
			q--;
		}
		if (p>=q)
			printf("%3d��ƽ��   %5d�ǻ�����\n",i,j);
	}
}

//����ַ���ǰ���Ŀո�
void leftTrim (char str[])
{
	int i;
	for (i=0;str[i]==' ';i++)                       //��str[i]�ƶ�����һ���ǿ�
		;
	strcpy (str,str+i);                             //��ȡ���ո�ε��ַ��������¸���ԭ����
}

