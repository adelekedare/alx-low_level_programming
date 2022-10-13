#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always retun 0 (Success)
 */
int main(void)
{
 /*evaluating sixe of variables*/
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of long int: %zu byte(s)\n", sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of char: %zu byte(s)\n", sizeof(char));

	return (0);
}
