<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return; Always 0 (Success)
 */

int check_num(char *str)

{
/*Declaring variables*/
unsigned int count;

count = 0;
while (count < strlen(str)) /*count string*/

{
if (!isdigit(str[count])) /*check if str there are digit*/
{
return (0);
}

count++;
}
return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

/*Declaring variables*/
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc) /*Goes through the whole array*/
{
if(check_num(argv[count]))

{
str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
sum += str_to_int;
}

/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}

count++;
}

printf("%d\n", sum); /*print sum*/

return (0);
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
>>>>>>> 432d58c3203d0d74d73aa075a01d5ad9ce43e529
