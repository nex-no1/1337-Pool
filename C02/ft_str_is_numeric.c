int ft_str_is_numeric(char *str) {
	while (*str) {
		if (!(*str>= 48 && *str<= 57)) {
			return 0;
		}
		str++;	
	}
	return 1;
}
// #include <stdio.h>
// int main(void) {
// 	char *str1 = "1337";
// 	char *str2 = "42NETWORK";
// 	printf("first: %d\n", ft_str_is_numeric(str1));
// 	printf("second: %d\n", ft_str_is_numeric(str2));
// }

