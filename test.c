#include "libft.h"
#include <stdio.h>


int	main(void)
{
	char s[] = "tripouille";
	printf("%s\n",ft_strchr(s, 't' + 256));
}