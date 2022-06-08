#include "main.c"
/** discription: print_sign-prints - or +
 * return: 1 + -1 0
 * @c : chk sign
 */
int print_sign(int n)
{
		if (n > 0)
				{
							_putchar('+');
									return (1);
										}
			else if (n == 0)
					{
								_putchar('0');
										return (0);
											}
				else
						{
									_putchar('-');
											return (-1);
												}
}
