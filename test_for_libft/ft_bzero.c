/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 15:09:46 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/14 16:25:00 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*s++ = 0;
}


int		main(void)
{
	char a[] = "Everyday is the day";
	bzero(&a[6], 3);
	printf("%s <-- is a\n", a);
	return (0);
}
