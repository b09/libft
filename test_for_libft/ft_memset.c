/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 12:22:58 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/14 17:01:24 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *c, int i, size_t len)
{
	int index;

	index = 0;
	while (index < len)
		c[index++] = i;
	return c;
}

int		main(void)
{
	char a[] = "Test test test";
	char *b = "greek yogurt";
	int i = 0;

	ft_memset(a, 'b', 7);
	printf("%s --> output", a);
//	memset(a, 'a', 7);
//	printf("%s --> output", a);
	return (0);
}
