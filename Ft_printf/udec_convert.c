#include "ft_printf.h"
#include "libft.h"

int	udec_convert(unsigned int n)
{
	char	*str;
	size_t	len;

	str = ft_uitoa(n);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
