#include <Windows.h>
#include <stdlib.h>

int day, hours, minuts, seconds, request, requestPause;

int main(void)
{
	seconds = 0;
	minuts = 0;
	hours = 0;
	day = 0;
	request = 0;

	printf("Hello person, if you whant to entrace the parking press 1\n");
	scanf_s("%d", &request);
	if (request == 1)
	{
		while (1)
		{
			seconds++;
			if (seconds == 60)
			{
				seconds = 0;
				minuts++;
				if (minuts == 60)
				{
					minuts = 0;
					hours++;
					if (hours == 24)
					{
						hours = 0;
						day++;
						if (day == 3)
						{
							printf("\ncall the police the car was left\n");
						}
					}
				}
			}
			printf("Your time in the parking [%d:%d:%d:%d]\r", day, hours, minuts, seconds);
			Sleep(1000);
		}
	}
	else
	{
		printf("well I hope see you soon at the next time");
	}
	return 0;
}