/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:18:05 by mdouzi            #+#    #+#             */
/*   Updated: 2022/11/01 20:34:52 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

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

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    
}