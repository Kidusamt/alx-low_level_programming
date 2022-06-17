/**
 * *cap_string - capitalze
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!','?', '"', '(', ')', '{', '}'}
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}

	}
	return (str);
}
