/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:48:07 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/20 18:28:31 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, c, 1);
}