/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 17:28:09 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/15 17:38:00 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	char *c;

	c = (char*)malloc(ft_strlen(s1) + 1);
	return (ft_strcpy(c, s1));
}
