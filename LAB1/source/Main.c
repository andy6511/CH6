#include<stdio.h>
#include<stdlib.h>
#include "Information.h"

void main(void)
{
	Person P;

	printf("Please input your name:");
	gets(P.name);
	printf("Please input your dender (0 for woman,1 for man):");
	scanf_s("%d", &P.gender);
	printf("Please input your age:");
	scanf_s("%d", &P.age);

	printf("\nHi! %s. ", P.name);
	if (P.gender == 0)
		printf("You are a %d-year-old woman.\n", P.age);
	else
		printf("You are a %d-year-old man.\n", P.age);
	system("pause");
}