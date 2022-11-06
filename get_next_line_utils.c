

// unsigned ft_strlen(char* s) {
// 	int i = 0;
// 	while (s[i])
// 		i++;
// 	return i;
// }



// char* ft_strchr(char* str, char c) {
// 	int i = 0;
// 	if (!str)
// 		return NULL;
// 	while (str[i]) {
// 		if (str[i] == c)
// 			return str + i;
// 		i++;
// 	}
// 	return NULL;
// }

// char* ft_strjoin(char* str1, char* str2) {
// 	int i = 0;
// 	int j = 0;
// 	if (!str1) {
// 		str1 = (char*)malloc(sizeof(char));
// 		*str1 = 0;
// 	}
// 	unsigned str1_len = ft_strlen(str1);
// 	unsigned str2_len = ft_strlen(str2);
// 	char* ret = (char*)malloc(sizeof(char) * (str1_len + str2_len + 1));
// 	while (str1[i]) {
// 		ret[i] = str1[i];
// 		i++;
// 		j++;
// 	}
// 	i = 0;
// 	while (str2[i]) {
// 		ret[j] = str2[i];
// 		i++;
// 		j++;
// 	}
// 	return ret;
// }