/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 16:18:01 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/14 17:38:11 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		*(char*)dest++ = *(char*)src++;	
}

int		main(void)
{
	char a[] = "String string";
	char b[50] = "Libft library";
	printf("String b before: %s \n", b);
   	ft_memcpy(b, a, 5);	
	printf("String b after: %s \n", b);
	return (0);
}
