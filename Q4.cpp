/* TASK 4: ATM PIN DIGIT CHECK:
A bank's system needs to verify a 4-to-6 digit PIN entered by a customer. Take the PIN as an integer
and, digit by digit, find the sum of its digits and print the PIN reversed (used as a basic
checksum/verification step). */

#include <stdio.h>
int main() {
	int i,n,pin,sum = 0,quoval,remval;
	printf("Enter your pin and ensure that it is between 4 and 6: ");
	scanf("%d",&pin);
	if(pin/10000 == 0 ) {
		n = 4 ;
	}
	else{
		n = 6 ;
	}
	
	i = 1 ;
	while(i<=n) {
		quoval = pin/10 ; remval = pin%10 ;
		sum = sum + remval ;
		pin = quoval ;
		printf("%d",remval);
		i++;
	}
	printf("\nSo the value of our Sum is %d",sum);
	return 0 ;
}
