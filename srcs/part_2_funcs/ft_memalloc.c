/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:46:23 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/21 16:44:12 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memalloc(size_t size)
{
	void *prt;

	prt = malloc(size);
	if (!ptr)
		return (NULL);
	while (size)
		ptr[size--] = 0;
	return (ptr);
}