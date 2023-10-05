#include "libft.h"

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		{
			sign = -1;
		}
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num  * 10 + str[i++] - 48;
	}
	return (num * sign);
}
/*int	main(void)
{
	char	a[25] = "  	+123456789bb567";
	printf("%d\n", ft_atoi(a));
	return (0);
}*/
