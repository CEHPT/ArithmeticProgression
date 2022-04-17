#include<stdio.h>
#include<math.h>

void FindNthTerm()
{
	int a,d,res,n;
	printf("\nEnter first Nth term :");
	scanf("%d",&a);
	printf("\nEnter different:");
	scanf("%d",&d);
	printf("\nWhich term you want:");
	scanf("%d",&n);
	
	res=a+(n-1)*d;
	
	printf("\n%dth terms is %d",n,res);
	
	printf("\n\nPress any key to continue");
	getch();


}

void printNthTerm()
{
	int a,d,res,n,i;
	printf("\nEnter first Nth term :");
	scanf("%d",&a);
	printf("\nEnter different:");
	scanf("%d",&d);
	printf("\nHow many terms you want:");
	scanf("%d",&n);	
	
	printf("\n");
	
	while(a<=n)
	{
		printf("%d ",a);
		a=a+d;
	}   
	
	printf("\nPress any key to continue");
	getch();

}

void printNthParticularTerm()
{
	int a,d,res,st,n,i;
	printf("\nEnter first Nth term :");
	scanf("%d",&a);
	printf("\nEnter different:");
	scanf("%d",&d);
	printf("\nEnter Starting term:");
	scanf("%d",&st);
	printf("\nHow many terms you want:");
	scanf("%d",&n);	
	
	printf("\n");
	
	res=a+(st-1)*d;
	for(i=1;i<n;i++)
	{
		printf("%d ",res);
		res=res+d;
	
	
	}
	
	printf("\nPress any key to continue");
	getch();
}

void SumAndProductOf3ConsicutiveNumbers()

{
	int sum,product,a,d;
	printf("\nSum of 3 consicutive number :");
	scanf("%d",&sum);
	printf("\nEnter Product of 3 consicutive number:");
	scanf("%d",&product);
	
	
	printf("\n");
	
	a=sum/3;
	d=sqrt((a*a)-(product/a));
	
	printf("\nThe 3 consicutive numbers is : %d %d %d",a-d,a,a+d);
	printf("\nPress any key to continue");
	getch();

}

void SumAndSumOfSqrtOf3ConsicutiveNumbers()

{
	int sum,SumOfSqr,a,d;
	printf("\nSum of 3 consicutive number :");
	scanf("%d",&sum);
	printf("\nEnter Product of 3 consicutive number:");
	scanf("%d",&SumOfSqr);
	
	
	printf("\n");
	
	a=sum/3;
	d=sqrt((SumOfSqr-(3*(a*a)))/2);
	
	
	printf("\nThe 3 consicutive numbers is : %d %d %d",a-d,a,a+d);
	printf("\nPress any key to continue");
	getch();

}




