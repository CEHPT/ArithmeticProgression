#include<stdio.h>
int main()
{
	
	int option;
	while(1)
	{
		
		system("cls");
		printf("\nArithmetic Progression\n----------------------\n\n");
		printf("\n1.Find Nth Terms\n");
		printf("\n2.Print First N Terms\n");
		printf("\n3.Print Nterms for particular terms\n");
		printf("\n4.Print Sum and Product of 3 consicutive numbers\n");
		printf("\n5.Print Sun and sum square of 3 consicutive numbers\n");
		printf("\n9.Exit\n");
	
		printf("\nEnter your choice (1-9):");
		scanf("%d",&option);
		
		if(option==9)
			break;
		
		switch(option)
		{
			case 1:
				FindNthTerm();
				break;
			case 2:
				printNthTerm();
				break;
			case 3:
				printNthParticularTerm();
				break;
			case 4:
				SumAndProductOf3ConsicutiveNumbers();
				break;
			case 5:
				 SumAndSumOfSqrtOf3ConsicutiveNumbers();
				 break;
				 
			default:
				printf("\nInvalid input! .press any key to continue");
				getch();
		
		}
	}
}

