/*
FILE: endianess.cpp
DESC: This program will quickly show if your system is Big Endian or Little Endian 
*/
#include <stdio.h>

int main()
{
	int  inty = 0x12345678;

	char* ptr = (char*)& inty;

	if(*ptr == 0x78)
		printf("\nI'm little endian!\n");
	else
		printf("\nI'm big endian!\n");
}
