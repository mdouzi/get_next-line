/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:18:05 by mdouzi            #+#    #+#             */
/*   Updated: 2022/11/01 21:56:06 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pt_src;
	unsigned char	*pt_dst;
	int				i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	pt_src = (unsigned char *)src;
	pt_dst = (unsigned char *)dst;
	while (n > 0)
	{
		pt_dst[i] = pt_src[i];
		i++;
		n--;
	}
	return (dst);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;
	size_t	result;

	i = 0;
	if (!dest && !size)
		return (0);
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (destlen < size)
		result = destlen + srclen;
	else
	{
		result = srclen + size;
		return (result);
	}
	while (src[i] != '\0' && destlen < (size - 1))
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (result);
}

size_t ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

char *ft_substr(char const *s, unisgned int start, size_t len)
{
    char *str;
    size_t j;
    size_t l;

    if(!s)
        return(NULL);
    J = 0;
    L = ft_strlen(s);
    if(len > l)
        len = l;
    if(start > l)
        return(NULL);
    str = (char *)malloc(sizeof(char) * len + 1);
    if(!str)
        return(NULL);
    while(s[j + start] && j < len)
    {
        str[j] = str[j + start];
        j++;
    }
    str[j] = '\0';
    return(str);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_1;
	size_t	len_2;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	len = (len_1 + len_2) + 1;
	str = (char *)malloc(1 * len);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, (char *)s1, (len_1 + 1));
	ft_strlcat(str, (char *)s2, len);
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
		return (str);
	return (0);
}