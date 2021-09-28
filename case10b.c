//S.Kumaran  IT20211400  Jaffna
#include<stdio.h>	//header file
int main(void)
{
	int sales_id, sales_id1, i = 1;	//declaring variable
	char name[20];			//declaring variable
	int phoneno[10];		//declaring variable
	char nic[15];			//declaring variable
	
	printf("please enter 0 to close \n");
	printf("Enter your id:-");
	scanf("%d",&sales_id);	//get input from keyboard
	while (sales_id != 0)	//using while loop
	{
		i = 1;
		FILE *sPtr;	//open file
		sPtr = fopen("salespeople.txt","r"); //read file
		fscanf(sPtr,"%d    %s	%s	%s",&sales_id1,name,phoneno,nic); //scan from file
		while(!feof(sPtr))
		{
			if (sales_id == sales_id1)
			{
				printf("ID:- %d\tName:- %s\tPhone No:- %s\tNIC no:- %s\n",sales_id,name,phoneno,nic); //display details
				i = 0;
			}
			fscanf(sPtr,"%d    %s	%s	%s",&sales_id1,name,phoneno,nic);// scan from file
		}
		if (i == 1)
		{
			printf("Sales_id is didn't exist\n");  //display error message
		}
		fclose(sPtr);
		printf("Enter your id:-");	//close file
		scanf("%d",&sales_id);	//get input from keyboard
	}
	return 0;
}