#include "main.h"

/**
 *jack_bauer - prints every minute of the day to 24 hours
 *@void: no arguments
 */
void jack_bauer(void)
{
	int sec, mh;

	for (mh = 0; mh < 24; mh++)
	{
		for (sec = 0; sec < 60; sec++)
		{
			putchar(mh / 10 + '0');
			putchar(mh % 10 + '0');
			putchar(':');
			putchar(sec / 10 + '0');
			putchar(sec % 10 + '0');
			putchar(10);
		}
	}
}
