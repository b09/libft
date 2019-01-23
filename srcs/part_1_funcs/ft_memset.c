/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 12:22:58 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/14 16:23:46 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *c, int i, size_t len)
{
	int index;

	index = 0;
	while (index < len)
		c[index++] = i;
	return (c);
}
