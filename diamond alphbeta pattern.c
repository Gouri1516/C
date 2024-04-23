#include <stdio.h>

int main()
{
	int i, j, k, rows, alphabet = 64;

	printf("Enter Diamond Pattern of Alphabets Rows = ");
	scanf("%d", &rows);
		
	printf("Printing Diamond Alphabets Pattern\n");
	for (i = 1 ; i <= rows; i++ ) 
	{
		for (j = 1 ; j <= rows - i; j++ ) 
		{
			printf(" ");	
		}
		for (k = 1 ; k <= i * 2 - 1; k++ ) 
		{
			printf("%c", alphabet + k);
		}
		printf("\n");
	}
		
	for (i = rows - 1 ; i > 0; i-- ) 
	{
		for (j = 1 ; j <= rows - i; j++ ) 
		{
			printf(" ");
		}
		for (k = 1 ; k <= i * 2 - 1; k++ ) 
		{
			printf("%c", alphabet + k);
		}
		printf("\n");
	}
}
