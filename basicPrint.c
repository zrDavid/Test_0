#include <stdio.h>

void main()
{
	char name[20];
	int age;
	// Welcome message
	printf("Welcome to the test program!\n");
	printf("Enter your name: ");
	scanf("%s", name);
	printf("-------------\t-------------\t-------------\t\n");
	printf("Hello %s\n\n", name);
	printf("What is your age?: ");
	scanf("%d", &age);
	printf("Hey %s, you are young, you are just %d years old", name, age);
}
