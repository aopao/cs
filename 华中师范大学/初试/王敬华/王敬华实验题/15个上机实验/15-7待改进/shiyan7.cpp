#include <stdio.h>
#include <string.h>

char*replace (char *str,char *substr,char *newstr);

void main ()
{
	char *p;
	char shuru[100],substr[10],newstr[10];
	//���ݵĶ���
	printf("������һ���ַ���:\n");
	scanf("%s",shuru);
	printf("������Ҫ���滻���Ӵ�:\n");
	scanf("%s",substr);
	printf("�������滻�ִ����ַ�:\n");
	scanf("%s",newstr);
	if (strlen(substr)!=strlen(newstr))
		printf("������滻�ַ�����������������");
	p=(replace (shuru,substr,newstr));
	printf("%s\n",p);
}

//�ַ����滻����
char*replace (char *str,char *substr,char *newstr)
{
	char *p;
	int i,j,a,b,e,c=0;
	i=strlen (str);
	j=strlen (substr);

	p=&str[0];
	for (a=0;a<i;a++)
	{
		if (*(p+a)==substr[0])                                                         //�ҵ�Ҫ���޸ĵ��ִ���λ��
		{
			for (b=0;b<j;b++)
			{
				if (*(p+b)==substr[b])
				{
					str[a+b]=newstr[b];                                              //�޸��Ӵ�
					c++;                                                             //����ͳ���޸Ĵ��������������Ӵ����ȣ��������
				}
				else
					break;
			}
		}
		else
			continue;
	}
	return (str);                                                                //���ص����������
}
					


