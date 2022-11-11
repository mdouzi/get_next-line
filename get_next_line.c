/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouzi <mdouzi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:15:00 by mdouzi            #+#    #+#             */
/*   Updated: 2022/11/11 20:14:13 by mdouzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

#define BUFFER_SIZE 150

char	*ft_line(char *save)
{
	if(!save)
		return (NULL);
	char	*line;
	int		i;
	
	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		line[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		line[i] = save[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*new_line(char *save)
{
	if (!save)
		return (NULL);
	char *res;
	int i;
	i = 0;
	int j;
	j = 0;

	while(save[i] && save[i] != '\n')
		i++;
	if(save[i] == '\n')
		i++;

	if(!(res = (char *)malloc(sizeof(char) * (ft_strlen(save) - i + 1))))
		return (NULL);
	while(save[i])
	{
		res[j] = save[i];
		i++;
		j++;
	}
	res[j] = '\0';
	free(save);
	return (res);
}

char *get_next_line(int fd)
{
	static char	*save;
	char		*buffer;
	int			rd;
	char		*line;
	// printf("save : %s\n", save);
	
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	rd = 1;
	while (strchr(buffer, '\n') == 0 && rd != 0)
	{
		rd = read(fd, buffer, BUFFER_SIZE);
		if(rd == -1)
		{
			free(save);
			free(buffer);
		}
		buffer[rd] = '\0';
		save = ft_strjoin(save, buffer);
	}
	free(buffer);
	line = ft_line(save);
	save = new_line(save);
	return (line);
}

#include <string.h>

int main()
{
	int fd;

	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	
}