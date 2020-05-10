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
	printf("正方体体积或面积计算\n");
    printf("体积:键入“1”\n");
	printf("面积:键入“2”\n");
	scanf("%d",&pd_1);
    if(pd_1==1)
	{
	    printf("长:");
	    scanf("%d",&A);
	    printf("\n宽:");
	    scanf("%d",&B);
	    printf("\n高:");
	    scanf("%d",&H);
		V = A*B*H;
		printf("体积:%d",V);
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
		printf("长:");
		scanf("%d",&A);
	    printf("\n宽:");
	    scanf("%d",&B);
	    printf("\n高:");
	    scanf("%d",&H);
		S = (A*B+A*H+B*H)*2;
		printf("\n面积:%d\n",S);
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
	
		printf("错误");
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
