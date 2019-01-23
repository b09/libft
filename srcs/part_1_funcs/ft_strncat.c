/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 14:46:53 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/16 14:56:53 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *c;
	int i;

	i = 0;
	c = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[i] != 0)
		c[i++] = s1[i++];
	while ((s2[j] != 0) && (n--))
		c[i++] = *s2++;
	c[i] = 0;
	return (c);
}
