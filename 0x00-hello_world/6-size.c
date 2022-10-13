#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always retun 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
long int longintType;
long long int longType;
char charType;
 /*evaluating sixe of variables*/
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu bytes\n", sizeof(longType));
printf("Size of char: %zu bytes\n", sizeof(charType));

	return (0);
}
