#include <stdio.h>
#include <math.h>
unsigned int binary_to_uint(const char *b)
{
	    int check_0_1(const char *b);
	        unsigned int i =0,sum = 0,j = 0;
		    if (!check_0_1(b))
			            return (0);

		        while (b[i])
				        i++;

			    while (i > 0){
				            sum=(sum + ((b[i-1] - '0') * (pow (2,j))));
					            j++;
						            i--;
							        }
			    return(sum);
}
int check_0_1(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
