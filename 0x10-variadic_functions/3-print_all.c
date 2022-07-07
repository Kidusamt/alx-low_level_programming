
 *
 *  * Return: void
 *   */
 void printf_string(va_list list)
{
		char *str = va_arg(list, char*);

			while (str != NULL)
					{
								printf("%s", str);
										return;
											}
				printf("(nil)");
}


/**
 *  * print_all - prints various types given a format string for the arguments
 *   *
 *    * @format: string containing type information for args
 *     *
 *      * Return: void
 *       */
void print_all(const char * const format, ...)
{
		const char *ptr;
			va_list list;
				funckey key[4] = { {printf_char, 'c'}, {printf_int, 'i'},
								   {printf_float, 'f'}, {printf_string, 's'} };
					int keyind = 0, notfirst = 0;

						ptr = format;
							va_start(list, format);
								while (format != NULL && *ptr)
										{
													if (key[keyind].spec == *ptr)
																{
																				if (notfirst)
																									printf(", ");
																							notfirst = 1;
																										key[keyind].f(list);
																													ptr++;
																																keyind = -1;
																																		}
															keyind++;
																	ptr += keyind / 4;
																			keyind %= 4;
																				}
									printf("\n");

										va_end(list);
}
