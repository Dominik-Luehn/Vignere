// ConsoleApplication1.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <stdio.h>

char main()
{
	char x = '@';
	char array[27][27];
	for (int i = 0; i < 27; i++) //Zeile
	{
		x = '@' + i;
		for (int c = 0; c < 27; c++) //Spalte
		{
			if (x > 'Z') {
				x ='@';
			}
			array[i][c] = x;
			x = x + 1;
		}
	}
	for (int e = 0; e < 27; e++)
	{
		for (int r = 0; r < 27; r++)
		{
			printf("%c", array[e][r]);
		}
		printf("\n");
	}
	return 0;
}