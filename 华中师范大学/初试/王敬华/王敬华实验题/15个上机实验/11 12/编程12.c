#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	FILE *fpr,*fpw;   //fpr�����ļ�ָ�룬fpw��д�ļ�ָ��
	char ch,str[100][80];
	int i,j;

	if(argc!=2)
	{
		printf("The number of arguments isn't correct\n ");  //�����в����д���
		printf("\n Usage: ��ִ���ļ��� filename \n  ");
		exit(0);
	}

	fpw=fopen(argv[1],"wt");      //��д�ķ�ʽ���ļ�
	if(fpw==NULL)                 //���ļ�ʧ��
	{
		printf(" can not open this file\n");
		exit(0);
	}
	for( ; (ch=getchar())!='@' ; )   //�����ַ����洢���ļ���
	  fputc(ch,fpw);
		fclose(fpw);       //�ر��ļ�


	fpr=fopen(argv[1],"rt");      //�Զ��ķ�ʽ���ļ�
	if(fpr==NULL)                 //���ļ�ʧ��
	{
		printf("file:%s not found! \n",argv[1]);
		exit(0);
	}
	for(i=0;i<100;i++)
		for(j=0;j<80;j++)
		{
			if(fgetc(fpr)=='\n')
			{
				str[i][j]='\n';
				break;
			}
			str[i][j]=fgetc(fpr);
		}
	fclose(fpr);        //�ر��ļ�

		for(i=1;;i++)
		{
		   for(j=0;str[i][j]!='\n';j++)
				if(str[i][j]>str[i][j+1])
				{
						ch=str[i][j];
						str[i][j]=str[i][j+1];
						str[i][j+1]=ch;
				}
				if(str[i][j]=='@')
					break;
		}

	fpw=fopen(argv[1],"rb+");     //�Զ�д�ķ�ʽ���ļ�
    if(fpw==NULL)                 //���ļ�ʧ��
	{
		printf("file:%s not found! \n",argv[1]);
		exit(0);
	}
	while((ch=fgetc(fpw))!=EOF)
	{
	    for(i=1;;i++)
		{
		   for(j=0;str[i][j]!='\n';j++)
			   fputc(str[i][j],fpw);
		   fputc('\n',fpw);
		}
	}
	fclose(fpw);       //�ر��ļ�

	fpr=fopen(argv[1],"rt");      //�Զ��ķ�ʽ���ļ�
	if(fpr==NULL)                 //���ļ�ʧ��
	{
		printf("file:%s not found! \n",argv[1]);
		exit(0);
	}
	for( ; (ch==fgetc(fpr))!=EOF ; )
		putchar(ch);
	fclose(fpr);        //�ر��ļ�
}