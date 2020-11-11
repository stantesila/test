#include <stdio.h>


//int main()
//{
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%dx%d=%d\t",j,i,i*j );
//		}
//		printf("\n");
//	}
//	return 0;
//}	

int main() 
{
	for (int Row = 9; Row >0; Row--)
	{
		for (int colum = 1; colum <= Row; colum++)
		{
			printf("%dx%d=%d\t", colum, Row, Row * colum);
	
		}
		printf("\n");
	}

			
	
	return 0;
}