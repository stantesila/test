#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <synchapi.h>


int main() {
	int hours, minutes, seconds;
	//Ñ­»·Ð¡Ê±
	for (hours = 0; hours < 24;hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			for (seconds = 0; seconds < 60; seconds++)
			{
				printf("%02d:%02d:%02d\n", hours, minutes, seconds);
				Sleep(1000);
				system("cls");
			}
		}
	}

	system("pause");
	return 0;
}