char *ft_strcat(char *dest, char *src) {
	char *temp;
	temp = dest;
	while (*dest) {
		dest++;
	}
	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return temp;
}
// #include <stdio.h>
// int main(void) {
// 	char s1[20] = "42-";
// 	char *s2 = "Network";
// 	printf("%s\n", s1);
// 	ft_strcat(s1, s2);
// 	printf("%s\n", s1);
// }