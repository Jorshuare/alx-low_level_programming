#include "main.h"
 /**
  * _islower - checks for a lowercase character
  * @c: is the int tht will use for the argument of the funciom
  *  Return: 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
