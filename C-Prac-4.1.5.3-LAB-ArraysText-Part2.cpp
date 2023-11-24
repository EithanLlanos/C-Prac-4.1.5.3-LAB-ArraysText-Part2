//Scenario
//Write a program that asks the user to enter four numbers as strings, and creates a human readable IP address from them.Your main task is to think about an appropriate data size to store the IP address.After this, your program should print the string.
//To insert four numbers(and three dots) into a string, you may use the sprintf function(not described), copy all the characters manually, or use another method more suitable for you.
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample input
//1
//2
//3
//4
//
//Expected output
//1.2.3.4
//
//Sample input
//255
//255
//255
//255
//
//Expected output
//255.255.255.255
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main(void) {
	char n1[4],n2[4],n3[4],n4[4];
	printf("Please enter the Ip byte number 1:\n");
	scanf_s("%3s", n1, sizeof(n1));
	printf("Please enter the Ip byte number 2:\n");
	scanf_s("%3s", n2, sizeof(n2));
	printf("Please enter the Ip byte number 3:\n");
	scanf_s("%3s", n3, sizeof(n3));
	printf("Please enter the Ip byte number 4:\n");
	scanf_s("%3s", n4, sizeof(n4));

	printf("%s.%s.%s.%s", n1, n2, n3, n4);
	return 0;
}
