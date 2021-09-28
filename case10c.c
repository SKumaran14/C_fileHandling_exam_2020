
#include<stdio.h> //header file
int main(void)
{
	int sales_id;	//declaring variable
	int date[10];	//declaring variable
	float amount;	//declaring variable
	FILE *fPtr;	// open file
	fPtr = fopen("sales_details.txt","w");// write file
	if (fPtr == NULL )
	{
		printf("file cannot open");	//display error message to file cannot open
		return -1;
	}
	printf("please enter 0 to close \n");
	printf("Enter your id:-");
	scanf("%d",&sales_id);	//get input from keyboard
	while (sales_id != 0)	//using loop
	{	
		printf("Enter amount details:-");
		scanf(" %f", &amount);	//get input from keyboard
		printf("enter date(dd/mm/yyyy):-");
		scanf("%s",&date);	//get input from keyboard
		fprintf(fPtr," %d\t\t%.2f\t\t%s\n",sales_id,amount,date); // write in file
		printf("Enter your id:-");
		scanf("%d", &sales_id);	//get input from keyboard
	}
	fclose(fPtr); //close file
	return 0;
}