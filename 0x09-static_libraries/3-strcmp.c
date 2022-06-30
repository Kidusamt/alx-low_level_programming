/**
 * _strcmp - comper 2 strings
 * @s1: 1st str
 * @s2: 2nd str
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
		j = s1[i] - s2[i];
		break;
		}
	}
	return (j);
}
