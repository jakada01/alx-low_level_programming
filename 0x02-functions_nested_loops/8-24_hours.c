#include "main.h"
/**
 * jack_baver - func that prints every minute of the day of jack baver start
 * n from 00:00 to 23:50, min loop counts mins, while hours counts hours
 * and resets mins
 * Return: 0
 */
void jack_baver(void);
{
int hours = 0;
int minutes = 0;
int hours_remainder;
int mins_remainder;
while (hours <= 23)
{
while (minutes <= 59)
{
av
hours_remainder = hours % 10;
_putchar(hours / 10 + '0');
_putchar(hours_remainder + '0');
_putchar(':');
_putchar(mins_remainder + '0');
minutes++;
_putchar('\n');
}
hours++;
minutes = 0;
}
}
