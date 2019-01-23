/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 15:36:19 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/15 17:21:58 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	while (len--)
		*(char*)dst++ = *(char*)src++;
	return (dst);	
}

int		main(void)
{
	char a[] = "This is a chicken";
	char b[] = "that eats a lot";
	memmove(a, &a[9], 10);
	printf("output of memmove string 'b': %s\n", a); 
	return (0);
}
