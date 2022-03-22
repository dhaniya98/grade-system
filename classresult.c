 #include<stdio.h>
int main()
{
	int num;
	printf("Enter the mark:");
	scanf("%d",&num);
	printf("You entered %d",num);
	if(num>=85)
	{ 
	printf("Grade A");
	}
	else if(num>=70)
	{
		printf("Grade B");
	}
	else if(num>=55)
	{
		printf("Grade C");
	}
	else if(num>=40)
	{
		printf("Grade D");
	}
	else if(num<40)
	{
		printf("Grade F");
	}
	return 0;
}
