#include <stdio.h>

void main ()
{
	int a,i,j,b;
	int n;

	printf("Please input a year number:");
	scanf("%d",&a);
	
	if (a>=2003)                                            //��������ݵ�1��1�����2003��1��1�����һ���еļ��죨%7��
	{
		n=(a-2003)*365%7;
		for (i=2003; i<a; i++)                                //���ȥ�˶��ٸ�����
		{
			if (i%400==0 || i%4==0 && i%100!=0)                 //��������꣬n++
				n++;
		}
	}
	else
	{
		n=(2003-a)*365%7;
		for (i=a; i<2003; i++)
		{
			if (i%400==0 || i%4==0 && i%100!=0)
				n++;
		}
	}
	
	if (a>=2003)                                               //���������1��1�����ڼ�
		n=(n+3)%7;
	else if (3-n>0)
		n=(3-n)%7;
	else
		n=(n-3)%7;
	
	printf("                        ====JANUARY====                        \n");       //һ��
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                  //����
	n=(n+31)%7;
	if (a%400==0 || a%4==0 && a%100!=0)
		b=29;
	else
		b=28;
	printf("                       ====FEBRUARY====                        \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+b; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else 
			printf("    ");
	}
	
	printf("\n");                                                                      //����
	n=(n+b)%7;
	printf("                         ====MARCH====                         \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else 
			printf("    ");
	}

	printf("\n");                                                                    	//����
	n=(n+31)%7;
	printf("                         ====APRIL====                         \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+30; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                    //����
	n=(n+30)%7;
	printf("                          ====MAY====                          \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                            //����
	n=(n+31)%7;
	printf("                         ====JUNE====                          \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+30; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else 
			printf("    ");
	}
	
	printf("\n");                                                                       //����
	n=(n+30)%7;
	printf("                         ====JULY====                          \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                          //����
	n=(n+31)%7;
	printf("                        ====AUGUEST====                        \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");

	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                     //����
	n=(n+31)%7;
	printf("                       ====SEPTEMBER====                       \n");
	printf("   Sun      Mon      Tues     Wed     THur      Fri      Sat   \n");
	
	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+30; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                          //ʮ��
	n=(n+30)%7;
	printf("                        ====OCTOBER====                        \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");
	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                   //ʮһ��
	n=(n+31)%7;
	printf("                       ====NOVERMBER====                       \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");
	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+30; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	
	printf("\n");                                                                      //ʮ����
	n=(n+30)%7;
	printf("                        ====DECEMBER====                       \n");
	printf("   Sun      Mon      Tues     Wed     Thur      Fri      Sat   \n");
	for (i=1; i<=n; i++)
	{
		printf("         ");
	}
	for (i=n; i<n+31; i++)
	{
		j=i%7;
		if (j==0)
			printf("\n");
		printf("    %d",i-n+1);
		if (i-n+1>9)
			printf("   ");
		else
			printf("    ");
	}
	printf("\n");
}





	





