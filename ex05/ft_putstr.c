#include	<unistd.h>

void	ft_putstr(char *str)
{
	int	set;

	set = 0;
	while (str[set] != 0)
	{
		write(1, &str[set], 1);
		set++;
	}
}
