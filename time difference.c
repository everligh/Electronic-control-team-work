#include <stdio.h>
int main()
{
	int hour1=0, minute1=0;
	int hour2=0, minute2=0;

	printf("please enter the start time(hour):");
	scanf_s("%d", &hour1);
	printf("please enter the start time(minute)");
	scanf_s("%d", &minute1);

	printf("please enter the end time(hour)");
	scanf_s("%d", &hour2);
	printf("please enter the end time(minute):");
	scanf_s("%d",&minute2);

	int time_difference = (hour2 * 60 + minute2 - hour1 * 60 - minute1);
	int time_difference_hour = time_difference / 60;
	int time_difference_minute = time_difference % 60;

	printf("the time difference is %d hours and %d minutes\n", time_difference_hour, time_difference_minute);
	
	return 0;
}