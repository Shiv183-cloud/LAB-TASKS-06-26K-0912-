/* TASK 1: MOVIE TICKET PRICING:
A cinema sells tickets for shows 1 through 10 in a day, and the price rises by Rs. 50 for each later
show (show 1 = Rs. 500). Print a schedule showing the show number and its ticket price. */

#include <stdio.h>
int main() {
	int currprice = 500 , i ;
	for (i=1;i<=10;i++) {
		printf("The Current Show Number is! %d & its ticket price is %d\n",i,currprice);
		currprice = currprice + 50 ;
	}
	return 0 ;
	
}
