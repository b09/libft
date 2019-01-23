/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:22:17 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/23 18:31:00 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != 0)
		++i;
	return (i);
}