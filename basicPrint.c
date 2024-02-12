#include <stdio.h>

void main()
{
	char name[20];
	printf("Enter your name: ");
	scanf("%s", name);
	printf("-------------\t-------------\t-------------\t\n");
	printf("Hello %s\n\n", name);
}