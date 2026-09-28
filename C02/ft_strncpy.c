char *ft_strncpy(char *dest, char *src, unsigned int n) {
	char *temp;
	temp = dest;
	unsigned int i = 0;
	while (*src && i < n) {
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i<n) {
		*dest = '\0';
		dest++;
		i++;
	}
	return temp;
}
// #include <stdio.h>
// int main(void) {
// 	char src[] = "HELLOWORLD";
// 	char dest[11];
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	printf("After: %s\n", ft_strncpy(dest, src, 8));
// }