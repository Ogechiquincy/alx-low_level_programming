<<<<<<< HEAD
=======
@@ -0,0 +1,23 @@
>>>>>>> 0a388c30908ad8119f6ca64a48c10d824f9c0506
#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
