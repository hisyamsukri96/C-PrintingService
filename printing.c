//Hisyam Media Printing Service

#include <stdio.h>

int main()
{
	char name[100];
	
	int pc, qpc, pr, qprb, qprc; 
	
	float pcPrice = 0.10;
	float prPriceBlack = 0.20;
	float prPriceColor = 0.50;
	
	float totalpc, totalprb, totalprc, totalpr, total, custpay, balance;
	
	printf("***************************************************\n");
	printf("           Hisyam Media Printing Service           \n");
	printf("***************************************************\n");
	
	printf("Please enter Your NickName: ");
	scanf("%s", &name); //enter customer nickname
	
	printf("Please enter Photocopy Quantity: ");
	scanf("%i", &qpc); //enter quantity of photocopying
	
	printf("Please enter Printing Quantity(black): ");
	scanf("%i", &qprb); //enter quantity of printing(black)
	
	printf("Please enter Printing Quantity(color): ");
	scanf("%i", &qprc); //enter quantity of printing(color)
	
	printf("***************************************************\n");
	
	printf("Name: %s \n", name); //display customer name
	printf("Quantity of Photocopy: %i \n", qpc); //display quantity of photocopying
	totalpc = pcPrice * qpc; //formula calculate quantity of photocopying
	
	printf("Quantity of Printing(black): %i \n", qprb);
	totalprb = prPriceBlack * qprb; //formula calculate quantity of printing(black)
	
	printf("Quantity of Printing(color): %i \n\n", qprc);
	totalprc = prPriceColor * qprc; //formula calculate quantity of printing(color)
	
	totalpr = totalprb + totalprc; //formula calculate printing black and color
	
	printf("Total Price Photocopy: RM%.2f \n", totalpc); //display total price of photocopy
	printf("Total Price Printing: RM%.2f \n\n", totalpr); //display total price of printing black and color
	
	total = totalpc + totalpr; //formula calculate total
	
	printf("Amount to pay: RM%.2f \n", total); //display amount to pay
	
	printf("Customer pay: RM");
	scanf("%f", &custpay); //enter amount of customer pay
	
	balance = custpay - total; //formula calculate balance
	
	printf("\nBalance: RM%.2f", balance); //display balance 
	
	return 0;
	
	 //notes : .2f is to return value with 2 decimal points only.
}
