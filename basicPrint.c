#include <stdio.h>

void main()
{
	char name[20], lname[20];
	int age;
	char musicInstrument[15], mband[20];
	// Welcome message
	printf("Welcome to the test program!\n");
	printf("Enter your name: ");
	scanf("%s", fname);
	printf("Enter your last name: ");
	scanf("%s", lname);
	printf("-------------\t-------------\t-------------\t\n");
	printf("Hello %s %s\n\n", fname, lname);
	printf("What is your age?: ");
	scanf("%d", &age);
	printf("Hey %s, you are young, you are just %d years old", fname, age);
	printf("What musical instrument do you play?: \n");
	scanf("%s", musicInstrument);
	printf("What is your favorite music band?: ");
	scanf("%s", mband);
}
