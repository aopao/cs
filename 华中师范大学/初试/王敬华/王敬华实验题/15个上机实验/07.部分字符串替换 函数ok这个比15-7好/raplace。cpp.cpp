#include <stdio.h>
#include <string.h>
char*Replace(char*str,char*substr,char*newstr);
void main()
{
	char str[100],substr[100],newstr[100];
	char *p;
	printf("�������ַ���:\n");
		gets(str);
	printf("�������Ӵ���������ģ�:\n");
		gets(substr);
	printf("�������µģ����ԭ�еģ�:\n");
		gets(newstr);
p=(Replace(str,substr,newstr));
printf("%s",p);
}

char*Replace(char*str,char*substr,char*newstr)
{
	char*pstr,*psub;      //  ԭ�ַ��� �Ӵ�
	int n,m,i ;
	 
	n=strlen(substr);
	pstr=str;
	psub=substr;
	for(;*pstr!='\0';pstr++)
	{
		if(*pstr==*psub)
		{
			m=strncmp(pstr,psub,n);
			if(m==0)
			{
				for(i=0;i<n;i++)
					*(pstr+i)=newstr[i];
				pstr=pstr+n;                       //����Ҫ�� ָ�����nλ
			}
		}
	}
	return(str);
}
