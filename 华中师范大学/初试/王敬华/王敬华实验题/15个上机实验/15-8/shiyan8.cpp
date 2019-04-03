#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node_Student_grade
{
	char Name[20];                             //����
	float Maths,English,C,Total;               //���Ʒ������ܷ�
	struct Node_Student_grade *next;           //ָ��
};
typedef struct Node_Student_grade NODE;





void main()
{
	int k,num;

	NODE *head,*p,*q;
	printf("please input the number of students:\n ");
	scanf("%d",&num);

	//����ͷ���head
	head=(NODE*)malloc(sizeof(NODE));
	if(head==NULL)
	{
		printf("no enough memory!\n");
		return;
	}
	head->next=NULL;

	for(k=0;k<num;k++)
	{
		//����һ���½ڵ�p
		p=(NODE*)malloc(sizeof(NODE));
			if(p==NULL)
			{
				printf("no enough memory!\n");
				return;
			}
    	fflush(stdin);
		printf("input the %dth student's name:\n",k+1);
			gets((p->Name));

		fflush(stdin);
			printf("input the %s student's Maths score:\n",p->Name);
			scanf("%f",&(p->Maths));
   fflush(stdin);
			printf("input the %s student's C score:\n",p->Name);
			scanf("%f",&(p->C));
		
		fflush(stdin);
			printf("input the %s student's English score:\n",p->Name);
			scanf("%f",&(p->English));
		
    
			(p->Total)=(p->Maths)+(p->English)+(p->C);


			//���ڵ�p���뵽������
			q=head;
			while(q->next!=NULL)
			{
				//���Ҳ���λ��
				if(q->next->Total<p->Total)
					break;
				q=q->next;
			}
			//�ڵ�pӦ���뵽q�ڵ�֮��
			p->next=q->next;
			q->next=p;
	}
	//����ɼ�
	printf("After sorted:\n");
	printf("  name       Maths  English   C   Total   \n");
	p=head->next;
	while(p!=NULL)
	{
		printf("%-10s %#6.1f %#6.1f %#6.1f %#6.1f",p->Name,p->Maths,p->English,p->C,p->Total);	printf("\n");
		p=p->next;
	}
	printf("end \n");

	//��������
	p=head;
	while(p->next!=NULL)
	{
		q=p->next;
		p->next=q->next;
		free(q);
	}
	free(head);









}

