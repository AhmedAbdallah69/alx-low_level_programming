#include <stdio.h>
#include "main.h"
/**
  * times_table - Prints a time table
  *
  * Return: ...
  */
void times_table(void)
{
	int i,j,k,l;

	for (i = 0; i < 10; ++i) {
	for (j = 0; j < 10; ++j) {
	if(i*j<10)
	{
		_putchar('0'+i*j);
		_putchar(',');
	}
		else {
		k=i*j/10;
		l=i*j%10;
		_putchar('0'+k);
		_putchar('0'+l);
		_putchar(',');
	}
	}
	_putchar('\n');
	}
}
