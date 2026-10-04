/* TASK 7: RESTAURANT ORDERING KIOSK:
A self-service kiosk shows a menu: 1) Add Item, 2) Remove Item, 3) View Total, 4) Checkout. The
kiosk should keep showing this menu and processing the customer's choice repeatedly until they
select Checkout, since the menu must appear at least once even for a walk-up customer */

#include <stdio.h>
int main() {
	int num,flag ;
	flag = 1 ;
	do {
		printf("---WELCOME TO SELF SERVICE MENU---\n");
		printf("Enter One of The Following, 1-Add Item , 2- Remove Item, 3-View Total, 4-Checkout\n");
		scanf("%d",&num);
		if (num==4) {
			flag = 0;
		}
	} while(flag) ;
	return 0 ;
}
