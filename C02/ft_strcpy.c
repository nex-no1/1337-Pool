char *ft_strcpy(char *dest, char *src) {
	char *temp;
	temp = dest;
	while(*src) {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return temp;
}
// #include <stdio.h>
// int main(void) {
// 	char src[] = "HelloWorld";
// 	char dest[11];
// 	printf("%s\n", ft_strcpy(dest, src));
// }

