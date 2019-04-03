#include <stdio.h>
#include <math.h>                 //��������ѧ����abs����������ֵ
#define QUEENS 8

void Queen(int n);                //�ݹ麯��
void Printf();                    //���
int Judge(int n);                 //�ж��Ƿ��г�ͻ

int Count = 0;                    //��¼�����ŵ�ȫ�ֱ�����
int Put[QUEENS];                  //��¼�ʺ��ڸ����ϵķ���λ�õ�ȫ�����顢

void main()
{
	Queen(0);                      //���õݹ麯�� 
                   
}

 void Queen(int n)                 //�ݹ麯��
 {
	 int i;    
	 if(n == QUEENS)               //n��0��8���Գ���һ���⣬����������ص���һ�е����� 
	 {
		 Printf();        
		 return;    
	 }   
	 for(i = 1 ; i <= QUEENS ; i++)                          
	 {        
		 Put[n] = i;                                            
		 if(Judge(n))                                    //�Ϸ� ��������һ�еķ���          
			 Queen(n + 1);     
	 }
 }

 int Judge(int n)                                        //�ж��Ƿ�Ϸ����Ϸ�����1�����Ϸ�����0
 {
	 int i;   
	 for(i = 0 ; i < n ; i++)                         
	 {
		 if(Put[i] == Put[n])                             //ͬһ���ϣ�����0    
			 return 0;         
		 if(abs(Put[i] - Put[n]) == (n - i))              //ͬһ�Խ����ϣ�����0����������ѧ����       
			 return 0;    
	 }   
	 return 1;                                            //û�г�ͻ������1
 }

 void Printf()                                            //���
 {    
	 int i;   
	 printf("���ǵ�%03d���⣺" , ++Count);                //Count��ʾ�ǵڼ����� 
	 for(i = 0 ; i < QUEENS ; i++)                        //��������������ϵĻʺ��λ��    
		 printf("%d " , Put[i]);   
	 printf("\n");
 }  