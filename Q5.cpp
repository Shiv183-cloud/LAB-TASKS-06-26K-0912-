/* TASK 5: WATER TANK DRAINING SIMULATION:
A water tank starts at a given level. Every hour, if the tank has an even number of liters, half the water
drains out; if it has an odd number, the tank operator adds 3x + 1 liters as an emergency refill rule (a
Collatz-style simulation). Simulate until the tank reaches exactly 1 liter, printing the level each hour
and the total number of hours taken. */

#include <stdio.h>
int main() {
	int liters,flag,hour;
	printf("Enter the level at which water level starts: ");
	scanf("%d",&liters);
	hour = 0;
	flag = 1 ;
	while(flag) {
		if (liters%2 == 0) {
			liters = liters/2 ;
		}
		else {
			if (liters != 1) {
				liters = 3*liters + 1 ;  
			}
		}
		hour++;
		printf("At %d hours the level of water tank is %d\n",hour,liters);
		if (liters == 1) {
			flag = 0 ;
		}
	}
	printf("\nThe Total Number of Hours it took is! %d",hour);
	return 0 ;
	
}
