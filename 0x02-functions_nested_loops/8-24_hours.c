#include"main.h"
/**
 *Jac_kBauer - prints every minute of the day
 *return:void
 */
void jack_bauer(void);
int min, hr;

	for (hr = 0 ; hr <= 23 ; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(58);
			_putchar((min / 10) + 48);
			_putchar((min / 10) + 48);
			_putchar('\n');
		}
	}
