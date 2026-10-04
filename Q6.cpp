/* TASK 6: EXAM RESULT ENTRY SYSTEM:
A university's result-entry portal must ensure a data-entry clerk cannot submit a mark outside the 0–
100 range. Keep asking the clerk to re-enter the mark until it is valid, then declare the student Pass
(=50) or fail.*/

#include <stdio.h>
int main() {
	int marks,flag ;
	flag = 1 ;
	do {
		printf("Please Enter your Marks: ");
		scanf("%d",&marks) ;
		if (marks>=0 && marks<=100) {
			if (marks>=50) {
				printf("You have Passed! ");
				flag = 0;
			}
			else {
				printf("You have Failed! ");
				flag = 0 ;
			}
		}
		else {
			printf("Enter Valid Marks! ");
		}
	} while (flag) ;
	return 0 ;
}
