int ft_str_is_printable(char *str) {
	while(*str) {
		if(!(*str >= 32 && *str <= 126)) {
			return 0;
		}
		str++;
	}
	return 1;
}
// #include <stdio.h>
// int main(void) {
// 	char *str1 = "\t";
// 	char *str2 = "Silent Hill!";
// 	printf("first: %d\n", ft_str_is_printable(str1));
// 	printf("second: %d\n", ft_str_is_printable(str2));
// }