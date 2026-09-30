int ft_size(char *str) {
	int i=0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
	char *temp;
	temp = dest;
	unsigned int i = 0;
	int lenght = ft_size(src);
	if (size == 0) {
		return lenght;
	}
	while (*src && i < size - 1) {
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return lenght;
}

