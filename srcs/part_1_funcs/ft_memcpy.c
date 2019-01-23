/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 16:18:01 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/14 19:27:33 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		*(char*)dest++ = *(char*)src++;
	return (dest);
}
