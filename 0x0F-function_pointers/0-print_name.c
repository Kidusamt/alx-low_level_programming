/**
 * print name - prints name
 * @name: string literal
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
