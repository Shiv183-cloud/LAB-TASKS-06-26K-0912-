/* TASK 3: LOAN INTEREST GROWTH:
A person deposits money and it grows using compound interest. Given the number of years, calculate
how much a sum of money grows if it's multiplied by a fixed growth factor each year (this is
essentially a factorial-style repeated multiplication). */
#include <stdio.h>
int main() {
	int n,i ;
	float money,percentage;
	printf("Enter the number of years for which compound interest be applied! ");
	scanf("%d",&n);
	printf("Enter the Amount of Money on which Interest will be applied! ");
	scanf("%f",&money); 
	printf("Enter the Percentage of compound interest! ");
	scanf("%f",&percentage);
	for(i=1;i<=n;i++) {
		money = money * (percentage/100.0) + money ;
	}
	printf("The Final Total Amount is! %.0f",money);
	return 0 ;
}

