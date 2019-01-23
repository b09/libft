/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:53:45 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/23 20:34:33 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char 	*ft_strncpy(char *dst, const char *src, int len)
{
	int i;

	i = 0;
	while ((len) && (src[i]  != 0))
	{
		dst[i] = src[i];
		--len;
		++i;
	}
	while (len)
	{
		dst[i] = 0;
		--len;
		++i;
	}
	return (dst);
}

int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		++i;
	return (i);
}

int		ft_wordcnt(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (s[i] != 0)
		j = 1;
	while (s[i] != 0)
	{
		++i;
		if (((s[i] == c) && (s[i - 1] != c) && (s[i + 1] != 0)))
			++j;
	}
	if ((s[ft_strlen(s) - 1] == c) && (s[ft_strlen(s) - 2] == c))
		--j;
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char **ary;
	int i;
	int j;
	
	j = ft_wordcnt(s, c);
	ary = (char**)malloc(sizeof(char*) * j);
	j = 0;
	i = 0;
	while ((*s != 0) || (s[i] != 0))
	{
		if (*s == c)
			++s;
		while (*s != c && *s != 0)
		{
			++s;
			++i;
			if ((*s == c) || (*s == 0))
			{
				ary[j] = (char*)malloc(sizeof(char) * i + 1);
				ary[j] = ft_strncpy(ary[j], &s[-i], (i));
				++j;
			}
		}
		i = 0;
	}
	return (ary);
}

int		main(void)
{
	char **b;
	char a[] = "this a test with many checks";
	b = ft_strsplit(a, ' ');
	printf("String containted in an arrray of strings:%s\n", b[0]);
//	printf("String containted in an arrray of strings:%s\n", b[1]);
//	printf("String containted in an arrray of strings:%s\n", b[2]);
//	printf("String containted in an arrray of strings:%s\n", b[3]);
//	printf("String containted in an arrray of strings:%s\n", b[4]);
//	printf("String containted in an arrray of strings:%s\n", b[5]);
	printf("String containted in an arrray of strings:%s\n", &b[5][9]);


	return (0);	
}