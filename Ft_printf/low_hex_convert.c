#include "ft_printf.h"
#include "libft.h"

int	low_hex_convert(int n)
{
	char	*str;
	size_t	len;
	
	str = ft_itoa_base(n, HEXBASE);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
