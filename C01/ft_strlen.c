int ft_strlen(char *str) {
	int i=0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
// #include <stdio.h>
// int main(void) {
// 	char *str = "string"; //6letters
// 	char *strr = "strings"; //7letters
// 	printf("%d Letters.\n", ft_strlen(str));
// 	printf("%d Letters.\n", ft_strlen(strr));
// }