//S.Kumaran  IT20211400  Jaffna
#include<stdio.h>	//header file
int main(void)
{ 
	int sales_id1, sales_id2, phoneno[10];	//declaring variable
	int date[10],count = 0;		//declaring variable
	float amount, total = 0, total_amount = 0;	//declaring variable
	char name[20], nic[15];		//declaring variable
	
	FILE *bPtr; // open file
	bPtr = fopen("salespeople.txt","r"); // read file 
	fscanf(bPtr,"%d    %s   %s	%s",&sales_id1,name,phoneno,nic); // scan from file
	while(!feof(bPtr))
		{
			total = 0;
			count = 0;
			printf("ID:- %d\tName:- %s\tPhone No:- %s\tNIC no:- %s\n",sales_id1,name,phoneno,nic);
			FILE *aPtr;// open file
			aPtr = fopen("sales_details.txt","r");	//read file
			fscanf(aPtr," %d    %f	%s",&sales_id2,&amount,date);	// scan from file
			while(!feof(aPtr))
			{	
				if(sales_id1 == sales_id2)
				{
					total = total + amount;  // calculate total
					count++;
					total_amount = total_amount + amount;
				}
				fscanf(aPtr," %d    %f	%s",&sales_id2,&amount,date);	// scan from file
			}
			printf("Your total sales is:- %d\t\tYour total amount of sales is:- %.2f\n",count,total);  // display 
			fclose(aPtr); // close file
			fscanf(bPtr,"%d    %s   %s	%s",&sales_id1,name,phoneno,nic);	// scan from file
		 }
		 printf("Total amount is :- %.2f",total_amount);
	fclose(bPtr); // close file
	return 0;
}