/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:56:36 by mdouzi            #+#    #+#             */
/*   Updated: 2022/11/01 22:01:09 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
/* lib */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


size_t ft_strlen(char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char *ft_substr(char const *s, unisgned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);


#endif