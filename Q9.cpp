/* TASK 9: WAREHOUSE INVENTORY LOOKUP:
A warehouse stores the stock count of 10 different product shelves in an array. Print the shelf stock
levels in reverse order (as if scanning from the back of the warehouse to the front), then let a staff
member search for a specific stock count and report which shelf (index) holds it, or that it doesn't
exist. */

#include <stdio.h> 
int main() {
	int i,stockcount,ProdShelves[10];
	int SearchFlag = 1 ;
	for (i=0;i<=9;i++) {
		printf("Enter your Stock Count: ");
		scanf("%d",&ProdShelves[i]);
	}
	for (i=9;i>=0;i--){
		printf("%d\n",ProdShelves[i]);
	}
	printf("Kindly Enter Specific Stock Count that you are willing to find! ");
	scanf("%d",&stockcount);
	i = 0;
	while(i<=9 && SearchFlag) {
		if (stockcount == ProdShelves[i]) {
			printf("It is stored at index value: %d\n",i);
			SearchFlag = 0;
		}
		i++;
	}
	if (SearchFlag == 1) {
		printf("The Specific Stock Count that you were trying to find doesn't exists\n");
	}
	return 0 ;	

}
