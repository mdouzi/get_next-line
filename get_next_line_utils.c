/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:57:31 by mdouzi            #+#    #+#             */
/*   Updated: 2022/11/11 19:10:17 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int ft_strlen(char* s) 
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}

int ft_strchr(char* str, char c) {
	while(*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char* ft_strjoin(char* str1, char* str2) {
	int i = 0;
	int j = 0;
	if (!str1) {
		str1 = (char*)malloc(sizeof(char) * 1);
		*str1 = 0;
	}
	if (!str1 || !str2)
		return (NULL);
	int str1_len = ft_strlen(str1);
	int str2_len = ft_strlen(str2);
	char* ret = (char*)malloc(sizeof(char) * (str1_len + str2_len + 1));
	while (str1[i]) {
		ret[i] = str1[i];
		i++;
		j++;
	}
	i = 0;
	while (str2[i]) {
		ret[j] = str2[i];
		i++;
		j++;
	}
	free(str1);
	return ret;
}
