/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:49:15 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/21 16:21:02 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int n, int fd)
{
	char a;

	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
	if (n <= 9 && n >= 0)
	{
		a = '0' + n;
		write(fd, &a, 1);
	}
}