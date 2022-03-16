#include <stdio.h>
#include "main.h"

/**
 * print_days - prints days
 * @day: day
 * @days: days in the year
 *
 * Return: void
 */
void print_days(int day, int days)
{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", days - day);
}

/**
 * print_remaining_days - takes a date and printls how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0)
	{
		if (year % 400 == 0)
		{
			if (month >= 2 && day >= 60)
				day++;
			print_days(day, 366);
		}
		else if (year % 100 == 0)
		{
			if (month == 2 && day == 60)
				printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
			else
				print_days(day, 365);
		}
		else
		{
			if (month >= 2 && day >= 60)
			day++;

			print_days(day, 366);
		}
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
			print_days(day, 365);
	}
}
