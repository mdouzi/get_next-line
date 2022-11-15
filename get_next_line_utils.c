/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:57:31 by mdouzi            #+#    #+#             */
/*   Updated: 2022/11/14 22:53:54 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc((count * size));
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (size * count));
	return (ptr);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	int		str1_len;
	int		str2_len;
	char	*ret;

	i = 0;
	j = 0;
	if (str1)
		str1_len = ft_strlen(str1);
	if (!str1)
	{
		str1 = (char *)calloc(sizeof(char), 1);
		str1[0] = '\0';
		str1_len = 0;
	}
	if (!str1 || !str2)
		return (NULL);
	str2_len = ft_strlen(str2);
	ret = (char *)calloc(sizeof(char), (str1_len + str2_len + 1));
	if (!ret)
		return (NULL);
	while (str1[i])
	{
		ret[i] = str1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i])
	{
		ret[j] = str2[i];
		i++;
		j++;
	}
	ret[j] = '\0';
	free(str1);
	return (ret);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;
	unsigned char temp;
	size_t i;

	p = (unsigned char *)b;
	temp = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		p[i] = temp;
		i++;
	}
	return (p);
}