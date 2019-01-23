/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 17:39:32 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/15 15:35:30 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while ((n--) && (*(char*)src != c))
		*(char*)dst++ = *(char*)src++;
	if (n > 0)
	{
		while (n-- > 0)
			*(char*)dst++ = *(char*)src++;
		return (dst);
	}
	return (NULL);
}

int		main(void)
{
	char a[]= "Here we go with ";
	char b[50] = "This should now work on the tests";
	char c[]= "Here we go with ";
	char d[50] = "This should now work on the tests";
	int i = 0;

	printf("This is output of memccpy: %s\n", memccpy(b, a, 't', 15));
	printf("Here we have dest: %s\n", b);
	printf("Output of ft_memccpy: %s\n", ft_memccpy(d, c, 't', 15));
	printf("Ouput of ft_memccpy dst: %s\n", d);
	return (0);
}
