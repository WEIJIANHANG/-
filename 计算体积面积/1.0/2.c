#include<stdio.h>
#include<windows.h>
int main()
{
	int A;
	int B;
	int H;
	int V;
	int S;
	int pd_1;
	int pd_2;
	printf("------------------\n");
chonglai:
	printf("������������������\n");
    printf("���:���롰1��\n");
	printf("���:���롰2��\n");
	scanf("%d",&pd_1);
    if(pd_1==1)
	{
	    printf("��:");
	    scanf("%d",&A);
	    printf("\n��:");
	    scanf("%d",&B);
	    printf("\n��:");
	    scanf("%d",&H);
		V = A*B*H;
		printf("���:%d",V);
		scanf("%d",&pd_2);
		printf("\n\n\n\n\n");
		if(pd_2==1)
		{
			goto chonglai;
		}
		else
		{
			return 0;
		}
	}
	else if(pd_1==2)
	{
		printf("��:");
		scanf("%d",&A);
	    printf("\n��:");
	    scanf("%d",&B);
	    printf("\n��:");
	    scanf("%d",&H);
		S = (A*B+A*H+B*H)*2;
		printf("\n���:%d\n",S);
		scanf("%d",&pd_2);
		printf("\n\n\n\n\n");
		if(pd_2==1)
		{
			goto chonglai;
		}
		else
		{
			return 0;
		}
	}
	else
	{
	
		printf("����");
		scanf("%d",&pd_2);
		printf("\n\n\n\n\n");
		if(pd_2==1)
		{
			goto chonglai;
		}
		else
		{
			return 0;
		}
	}
}
