#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return(i);
}

int ft_strchr(char *str, char c) 
{
    int i;
    i = 0;

    while (str[i])
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return(NULL);
}


char *strjoin(char *s1, char *s2)
{
    int i;
    int size;
    int j;
    char *str;
    size = ft_strlen(s1) + ft_strlen(s2);
    str = malloc(sizeof(char) * size + 1);
    i = 0;
    j = 0;

    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return(str);
}


char *get_next_line(int fd)
{
    int rd;
    char *buffer;
    char *current;
    static char *next;
    next = NULL;

    if(fd < 0 && BUFFER_SIZE <= 0)
        return  NULL;
    buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if(!buffer)
        return(NULL);
    rd = 1;
while((ft_strch(next, '\n') && rd != 0 ))
{
    rd = read(fd, buffer, BUFFER_SIZE);
    if(rd <= 0)
        break;
    buffer[rd] = '\0';
    next = ft_strjoin(next, buffer);
}
free(buffer);


    
}