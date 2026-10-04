/* TASK 2: CLASS TEST SCORES:
A teacher has n students in a class. Take n from the user, then take each student's test score (out of
100). Print the class's total score and average score. */

#include <stdio.h>
int main() {
	int i,marks,total = 0;
	float n,avg ;
	printf("Enter number of Students in the class! ");
	scanf("%f",&n);
	for (i=1;i<=n;i++) {
		printf("Enter your marks out of 100! ");
		scanf("%d",&marks);
		total = total + marks;
		
	}
	avg = total/n ; 
	printf("The total for %.0f Students is! %d\n",n,total) ; 
	printf("The Average for %.0f Students is! %.0f",n,avg);
	return 0 ;
}

