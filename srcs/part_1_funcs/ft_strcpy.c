/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:32:01 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/15 17:36:03 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (*src != 0)
		src[i++] = dst[i++]
	dst[i] = 0;
	return (dst);
}
