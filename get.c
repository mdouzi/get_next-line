#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1

unsigned ft_strlen(char* s) {
	int i = 0;
	while (s[i])
		i++;
	return i;
}

char* ft_strchr(char* str, char c) {
	int i = 0;
	if (!str)
		return NULL;
	while (str[i]) {
		if (str[i] == c)
			return str + i;
		i++;
	}
	return NULL;
}

char* ft_strjoin(char* str1, char* str2) {
	int i = 0;
	int j = 0;
	if (!str1) {
		str1 = (char*)malloc(sizeof(char));
		*str1 = 0;
	}
	unsigned str1_len = ft_strlen(str1);
	unsigned str2_len = ft_strlen(str2);
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
	return ret;
}

char *read_newline(int fd, char *save)
{
    int rb = 1;
    char * buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE) + 1);

    while (rb > 0 && !ft_strchr(save, '\n')) {
        rb = read(fd, buffer, BUFFER_SIZE);
        if(rb == -1)
        {
            free(save);
            free(buffer);
            return (NULL);
        }
        buffer[rb] = 0;
        save = ft_strjoin(save, buffer);
    }
    free(buffer);
    return(save);
}


char *get_line(char *save)
{
    int i;
    int j;
    i = 0;
    j = 0;

    if(!save)
        return(NULL);
    while (save[i] && save[i] != '\n')
        i++;
    
    
}