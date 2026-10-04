/* TASK 8: WEATHER STATION TEMPERATURE LOG:
A weather station records the temperature (°C) every hour for 8 hours in a day. Store the readings in
an array and report the hottest temperature, the coldest temperature, and the second-hottest
temperature of the day */

#include <stdio.h>
int main() {
	float TempReadings[8],hottemp,coldtemp,secondhot;
	int i ; 
	hottemp = -100.0 ;
	coldtemp = 1000.0 ;
	
	for (i=0;i<=7;i++) {
		printf("Enter the Temperature Reading: ");
		scanf("%f",&TempReadings[i]);
	}
	for (i=0;i<=7;i++) {
		if (TempReadings[i] > hottemp) {
			hottemp = TempReadings[i];
		}
		if (TempReadings[i] < coldtemp) {
			coldtemp = TempReadings[i];
		}
	}
	for (i=0;i<=7;i++) {
		if(TempReadings[i] < hottemp && TempReadings[i] > coldtemp) {
			secondhot = TempReadings[i] ;
	}
	}
	printf("The Hotest Temperature ever Recorded is! %.2f\n",hottemp) ;
	printf("The Coldest Temperature ever Recorded is! %.2f\n",coldtemp);
	printf("The Second Hotest Temperature ever Recorded is! %.2f\n",secondhot);
	return 0 ;
	
}
