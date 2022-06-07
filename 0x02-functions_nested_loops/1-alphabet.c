#include "main.h" 
/**                                                                                                                                             
 * Description: main - print a-z 
 * Return: 0 after complition
 */
int main(void)
{
	void print_alphabet(void)
	{
			char letter;

				for (letter = 'a'; letter <= 'z'; letter++)
							_putchar(letter);

					_putchar('\n');
	}
}
