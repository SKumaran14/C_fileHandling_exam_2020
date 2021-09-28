#include<stdio.h>	//header file
int main(void)
{
	int sales_id;	//declaring variable
	char name[20];	//declaring variable
	int phoneno[10];//declaring variable
	char nic[15];	//declaring variable
	int i = 1;	//declaring variable

	FILE *cPtr;	//open file
	cPtr = fopen("salespeople.txt","w"); // write file
	if (cPtr == NULL )
	{
		printf("file cannot open"); //display error message to file cannot open
		return -1;
	}
	printf("***************Welcome*****************\n");
	printf("please enter 0 to close \n");
	printf("Enter your id:-");
	scanf("%d",&sales_id);	//get input from keyboard
	while (sales_id != 0)	//using while loop
	{
		printf("Enter your name:-");
		scanf("%s",name);	//get input from keyboard
		printf("Enter your phone no:-");
		scanf("%s",&phoneno);	//get input from keyboard
		printf("Enter NIC no:- ");
		scanf("%s",&nic);	//get input from keyboard
		
		fprintf(cPtr,"%d\t%s\t%s\t%s\n",sales_id,name,phoneno,nic);//write in file
		i = 0;
		printf("Enter your id:-");
		scanf("%d",&sales_id);	//get input from keyboard
	}
	fclose(cPtr);	// close file
	if(i == 0)
	{
		printf("All details are successfully stored in file");
	}
	return 0;
}