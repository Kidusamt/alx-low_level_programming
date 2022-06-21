#include "main.h"
/**
 * *_strstr - unction that locates a substring
 * @haystack: arg 1
 * @needle: arg 2
 * Return: char/
 */
char *_strstr(char *haystack, char *needle)
{
		while (*haystack)
				{
							if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
										{
														return (haystack);
																}
									else
												{
																haystack++;
																		}
										}
			return (0);
}
