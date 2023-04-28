#include <stdio.h>
#include "lists.h"

void variable(void) __attribute__ ((constructor));

/**
 * variable - executes before main()
 *
 * Return: void
 */

void variable(void)
{
	printf("You're beat! and yet. you must allow,\n"
			"I bore my house upon my back!\n");
}
