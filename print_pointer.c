#include "main.h"
#include <stdio.h>



/**
  * print_pointer - print address of var
  * @args: argument list
  * Return: @count address
  */


int print_pointer(va_list args)
{
	char buffer[BUFFER_SIZE];
	int i, count = 0;
	void *ptr  = va_arg(args, void*);

	sprintf(buffer, "%p", ptr);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}
