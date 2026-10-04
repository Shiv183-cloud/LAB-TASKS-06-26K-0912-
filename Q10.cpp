/* TASK 10: PASSWORD STRENGTH CHECKER:
A signup form takes a username (up to 20 characters) as input. Count how many vowels and
consonants it contains (a basic strength heuristic), then convert the username to all uppercase to store
it in the system's case-insensitive username database */

#include <stdio.h>
#include <ctype.h>
int main() {
	char UserName[20] ;
	int i,vowcount=0,consocount=0;
	char UpperUserName[20];
	for (i=0;i<=19;i++) {
		printf("Enter the Character: ");
		scanf(" %c",&UserName[i]);
	}
	for(i=0;i<=19;i++) {
		if (UserName[i] == 'a' || UserName[i] == 'A' ||UserName[i] == 'e' || UserName[i] == 'E'|| UserName[i] == 'i' || UserName[i] == 'I'|| UserName[i] == 'o' || UserName[i] == 'O'|| UserName[i] == 'u' || UserName[i] == 'U'){
			vowcount++ ;
		}
		else{
			consocount++;
		}
	}
	for(i=0;i<=19;i++) {
		UpperUserName[i] = toupper(UserName[i]) ;
		printf("The Value of UpperCase Character is %c\n",UpperUserName[i]);
	} 
	printf("The Number of Vowels this UserName contains is %d ",vowcount);
	printf("The Number of Consonants this UserName contains is %d ",consocount);
	return 0 ;
}
