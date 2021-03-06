/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:49:51 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/18 12:55:16 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}