/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:43:18 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/17 14:21:50 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char restrict *s1, const char *restrict s2)
{
	char *c;
	int i;

//	i = 0;
	c = (char*)malloc(strlen(s1) + strlen(s2) + 1);
	while (*s1 != 0)
		*c++ = *s1++;
	while (*s2 != 0)
		*c++ = *s2++;
	*c = 0;
	return (&c[-15]);
}

int		main(void)
{
	char *a = "This is a string ";
	char *b = "that keeps on going";
	char *c;
	c = ft_strcat(a, b);
	printf("string a is: %s", c);
	return (0);
}
